/*** lseek.c ***/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]){
    int fd, endp;
    fd = open(argv[1], O_RDWR|O_CREAT, 0600);
    endp = lseek(fd, 0L, SEEK_END);
    printf("Size of %s: %d\n", argv[1], endp);
    close(fd);
}