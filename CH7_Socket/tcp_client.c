/*** tcp_server.c ***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

int main(int argc, char *argv[]){
    int sock_fd, bytes;
    struct sockaddr_in ser_addr;
    char *snddata, rcvdata[1024];

    snddata = argv[2];
    sock_fd = socket(AF_INET, SOCK_STREAM, 0);

    memset(&ser_addr, 0,sizeof(ser_addr));
    ser_addr.sin_family = AF_INET;
    ser_addr.sin_addr.s_addr = inet_addr(argv[1]); // INADDR_ANY : It received Network Interface that connected server defined interface, htonl :  
    ser_addr.sin_port = htons(5050);
    connect(sock_fd, (struct sockaddr *) &ser_addr, sizeof(ser_addr));
    send(sock_fd, snddata, strlen(snddata), 0);
    printf("Received: ");
    
    bytes = recv(sock_fd, rcvdata, 1024, 0);
    rcvdata[bytes] = '\0';
    printf("%s\n",rcvdata);

    close(sock_fd);


    close(sock_fd);

}