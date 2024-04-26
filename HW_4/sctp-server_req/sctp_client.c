
#include <request_coder.h>
#include <request_decoder.h>

#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/sctp.h>


#define BUFFER_SIZE 1024


void get_message(char *buffer, char *string, size_t mess_size, size_t buff_size) {
    create_connection_request(buffer, buff_size, string, mess_size, correct_mode);
}



int main(int argc, char const** argv) {

    // set default address and port
    const char *address = "127.0.0.1";
    if (argc >= 2) { address = argv[2]; }
    int port = 9999;
    if (argc >= 3) { port = atoi(argv[3]); }
    
    int status;
    int valread; 
    int client_fd;
    struct sockaddr_in serv_addr;
    int flags;
    struct sctp_sndrcvinfo sndrcvinfo;

    char buffer[BUFFER_SIZE] = { 0 };

    if ((client_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_SCTP)) < 0) {
        printf("ERROR: socket failed \n");
        return EXIT_FAILURE;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port);

    // Convert IPv4 and IPv6 addresses from text to binary form
    if (inet_pton(AF_INET, address, &serv_addr.sin_addr) <= 0) {
        printf("ERROR: Invalid address/ Address not supported \n");
        return EXIT_FAILURE;
    }
 
    if ((status = connect(client_fd, (struct sockaddr*)&serv_addr, sizeof(serv_addr))) < 0) {
        printf("ERROR: connection failed \n");
        return -1;
    }

    
    char *message = NULL;
    size_t size; 
    while (getline(&message, &size, stdin) != -1) {
        // make message
        get_message(buffer, message, strlen(message), BUFFER_SIZE);
        
        // send hello
        // send(client_fd, buffer, BUFFER_SIZE, 0);
        sctp_sendmsg(client_fd, buffer, BUFFER_SIZE, NULL, 0, 0, 0, 0, 0, 0);
        printf("[+] message sent\n");

        // clear buffer
        memset(buffer, 0, sizeof(buffer));
        
        // subtract 1 for the null terminator at the end
        valread = sctp_recvmsg(client_fd, buffer, BUFFER_SIZE,
        (struct sockaddr *) NULL, 0, &sndrcvinfo, &flags); 
        printf("%s\n", buffer);
        decode_connection_setup(buffer, valread);

    }
 
    // closing the connected socket
    close(client_fd);
    return 0;

}

