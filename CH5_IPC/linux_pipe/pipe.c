/**** pipe.c ***/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(){
    int pid, fd[2], status, n;
    char *msg = "God bless you !!!";
    char msgbuf[100];

    pipe(fd);
    pid = fork();
    if(pid > 0){
        close(fd[0]);
        write(fd[1], msg, strlen(msg)+1);
        wait(&status);
    }
    else if(pid == 0){
        close(fd[1]);
        sleep(1);
        read(fd[0], msgbuf, strlen(msg)+1);
        printf("%s\n", msgbuf);
    }
}