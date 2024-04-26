
#include <request_coder.h>
#include <request_decoder.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#define _GNU_SOURCE
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/sctp.h>


// задаем размер буфера
#define BUFFER_SIZE 1024


// выносим создание сообщения в отдельную функцию для удобства
void get_message(char *buffer, char *string, size_t mess_size, size_t buff_size) {
    create_connection_setup(buffer, buff_size, string, mess_size, correct_mode);
}


int main(int argc, char** argv) {

    // проверяем аргументы, если их нет - прерываем программу
    if (argc <= 1) {
        printf("USAGE: server <port> <optional:num_clients>\n");
        return EXIT_FAILURE;
    }
    int port = atoi(argv[1]);
    int num_clients = 3;
    if (argc >= 3) { num_clients = atoi(argv[2]); }

    // создаем переменные для работы сокета
    int server_fd;
    int new_socket;
    struct sockaddr_in address;
    int flags;
    struct sctp_sndrcvinfo sndrcvinfo;
    int opt = 1;
    int addrlen = sizeof(address);
    
    // создаем буфер
    char buffer[BUFFER_SIZE] = {0};

    // создаем дескриптор сокета в режиме SCTP
    if ((server_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP)) == 0) {
        perror("ERROR: socket failed!");
        return EXIT_FAILURE;
    }

    // конфигурируем сокет
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
        perror("ERROR: setsockopt failed!");
        return EXIT_FAILURE;
    }

    // устанавливаем адрес и порт
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(port);

    // совершаем процедуру BIND
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("ERROR: bind fails!");
        return EXIT_FAILURE;
    }

    // переводим сокет в режим слушания
    if (listen(server_fd, num_clients) < 0) {
        perror("ERROR: listening failed!");
        return EXIT_FAILURE;
    }

    // выводим сообщение, что сервер слушает порт
    printf("[+] Server listening on port %d\n", port);

    // совершаем процедуру ACCEPT
    while ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) >= 0) {

        // выводим сообщение о произошедшем подключении
        printf("[+] Connection accepted\n");

        // считываем данные в буфер по протоколу SCTP
        ssize_t valread;
        while ((valread = sctp_recvmsg(new_socket, buffer, BUFFER_SIZE,
        (struct sockaddr *) NULL, 0, &sndrcvinfo, &flags)) > 0) {
            // выводим полученные данные в сыром виде
            printf("Received data:\n%s\n", buffer);
            
            // дешифруем сообщение и выводим в формате XML
            decode_connection_request(buffer, BUFFER_SIZE);
            
            // формируем ответ в формате RRCConnectionSetup
            char *message = "hello from server";
            get_message(buffer, message, strlen(message), BUFFER_SIZE);

            // отправляем сообщение обратно по SCTP
            sctp_sendmsg(new_socket, buffer, BUFFER_SIZE, NULL, 0, 0, 0, 0, 0, 0);
            // очищаем буфер
            memset(buffer, 0, sizeof(buffer));

        }

    }

    // совершаем процедуру CLOSE
    close(server_fd);
    return EXIT_SUCCESS;

}
