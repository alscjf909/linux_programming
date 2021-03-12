/*** fifo_write.c***/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>

int main(){
    int fd;
    char *msg = "God bless you !!!";

    mkfifo("fifo", 0600);

    fd = open("fifo", O_WRONLY);
        write(fd, msg, strlen(msg) +1);
    close(fd);
    sleep(1);
    unlink("fifo");
}