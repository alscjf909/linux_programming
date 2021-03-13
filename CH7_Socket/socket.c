/*** socket.c ***/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>

int main(){
    int sock_fd;
    sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    if(sock_fd == -1){
        printf("socket() error !!!\n");
        exit(1);
    }
    else{
        printf("sock_fd = %d\n", sock_fd);
        close(sock_fd);
    }
}