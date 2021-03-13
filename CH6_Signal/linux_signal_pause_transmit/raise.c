/** raise.c**/

#include <stdio.h>
#include <unistd.h>
#include <signal.h>


void sigHandler(int signo){
    printf("%d Received Signal[%d]\n",getpid(),signo);
}

int main(){
    int pid, ret;
    struct sigaction act;
        act.sa_handler = sigHandler;
        sigaction(SIGALRM, &act, NULL);
        pid = fork();
        if(pid > 0){
            printf("Send signal to %d !!!\n",pid);
            kill(pid, SIGALRM);
            sleep(1);
            printf("Send signal to %d !!!\n", getpid());
            raise(SIGALRM);
        }
        else if(pid == 0){
            ret = pause();
            printf("pause return %d !!!\n", ret);
        }
}