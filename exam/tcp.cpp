

#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>


// Создайте простой TCP сервер на C++, 
// который принимает сообщения от клиента в циклический буфер 
// и отправляет обратно подтверждение о получении.

// В ответе прикрепите ссылку на репозиторий с решением


#define BUFFER_SIZE 1024


// За основу решения взят код, который я использовал в последнем ДЗ
// Сервер протестирован только на Linux
int main(int argc, char** argv) {

    // парсим аргументы
    if (argc <= 1) {
        std::cout << "USAGE: server <port>\n";
        return 1;
    }
    int port = std::atoi(argv[1]);
    int num_clients = 3;

    // -----------------------------------------------------
    int server_fd;
    int new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[BUFFER_SIZE] = {0};

    // создаем дескриптор сокета
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        std::cerr << "ERROR: socket failed!\n";
        return 1;
    }

    // настраиваем сокет
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
        std::cerr << "ERROR: setsockopt failed!\n";
        return 1;
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(port);

    // биндим соккет
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        std::cerr << "ERROR: bind fails!\n";
        return 1;
    }

    // слушаем указанный порт
    if (listen(server_fd, num_clients) < 0) {
        std::cerr << "ERROR: listening failed!\n";
        return 1;
    }

    // акцептим подключение
    while ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) >= 0) {
        // read data from the client and print it
        ssize_t valread;
        while ((valread = read(new_socket, buffer, BUFFER_SIZE)) > 0) {
            // пишем в ответ содержимое буффера
            write(new_socket, buffer, valread);
            // очищаем буффер
            memset(buffer, 0, sizeof(buffer));

        }

    }
    // закрываем сокет
    close(server_fd);
    return 0;

}
