/*** fifo_read.c***/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
    int fd;
    char msgbuf[1024];

    sleep(2);
    fd = open("fifo", O_RDONLY);
        read(fd,msgbuf,1024);
        printf("%s\n",msgbuf);
}