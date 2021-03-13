/*** tcp_server.c ***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

int main(){
    int sock_fd, new_fd, bytes;
    struct sockaddr_in seraddr, cliaddr;
    char data[1024];
    socklen_t cli_addr_size;
    cli_addr_size = sizeof(cliaddr);

    sock_fd = socket(AF_INET, SOCK_STREAM, 0);

    memset(&seraddr, 0,sizeof(seraddr));
    seraddr.sin_family = AF_INET;
    seraddr.sin_addr.s_addr = htonl(INADDR_ANY); // INADDR_ANY : It received Network Interface that connected server defined interface, htonl :  
    seraddr.sin_port = htons(5050);
    bind(sock_fd, (struct sockaddr *) &seraddr, sizeof(seraddr));
    listen(sock_fd,10);
    while(1){
        new_fd = accept(sock_fd,(struct sockaddr *) &cliaddr, &cli_addr_size);
        bytes = recv(new_fd,data, 1024, 0);
        send(new_fd, data, bytes,0);
        close(new_fd);
    }   

    close(sock_fd);

}