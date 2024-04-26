
#include <request_coder.h>
#include <request_decoder.h>

#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/sctp.h>


// задаем размер буфера
#define BUFFER_SIZE 1024


// выносим создание сообщения в отдельную функцию для удобства
void get_message(char *buffer, char *string, size_t mess_size, size_t buff_size) {
    create_connection_request(buffer, buff_size, string, mess_size, correct_mode);
}



int main(int argc, char const** argv) {

    // проверяем аргументы, если их нет - используем аргументы по умолчанию
    if (argc <= 1) { printf("USAGE: server <ip-address> <port>\n"); }
    // устанавливаем адрес и порт по умолчанию (либо их можно ввести при запуске программы)
    const char *address = "127.0.0.1";
    if (argc >= 2) { address = argv[2]; }
    int port = 9999;
    if (argc >= 3) { port = atoi(argv[3]); }

    printf("Run client on: %s:%d\n", address, port);
    
    // создаем переменные для работы сокета
    int status;
    int valread; 
    int client_fd;
    struct sockaddr_in serv_addr;
    int flags;
    struct sctp_sndrcvinfo sndrcvinfo;

    // создаем буфер
    char buffer[BUFFER_SIZE] = { 0 };

    // создаем дескриптор сокета в режиме SCTP
    if ((client_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP)) < 0) {
        printf("ERROR: socket failed \n");
        return EXIT_FAILURE;
    }

    // настраиваем сокет, задаем порт
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);

    // Преобразуем IPv4 и IPv6 в бинарный вид
    if (inet_pton(AF_INET, address, &serv_addr.sin_addr) <= 0) {
        printf("ERROR: Invalid address/ Address not supported \n");
        return EXIT_FAILURE;
    }
 
    // совершаем процедуру CONNECT
    if ((status = connect(client_fd, (struct sockaddr*)&serv_addr, sizeof(serv_addr))) < 0) {
        printf("ERROR: connection failed \n");
        return -1;
    }

    
    // запускаем цикл, в котором считываем стандартный ввод
    char *message = NULL;
    size_t size; 
    while (getline(&message, &size, stdin) != -1) {
        // преобразуем текст из стандартного ввода в сообщение RRCConnectionRequest
        get_message(buffer, message, strlen(message), BUFFER_SIZE);
        
        // отправляем сформированное сообщение по SCTP
        sctp_sendmsg(client_fd, buffer, BUFFER_SIZE, NULL, 0, 0, 0, 0, 0, 0);
        printf("[+] message sent\n");

        // очищаем буфер
        memset(buffer, 0, sizeof(buffer));
        
        // получаем ответ от сервера
        valread = sctp_recvmsg(client_fd, buffer, BUFFER_SIZE,
        (struct sockaddr *) NULL, 0, &sndrcvinfo, &flags); 
        // выводим полученное сообщение в сыром виде
        printf("%s\n", buffer);
        // декодируем сообщение и выводим уже в формате XML
        decode_connection_setup(buffer, valread);

    }
 
    // совершаем процедуру CLOSE
    close(client_fd);
    return 0;

}

