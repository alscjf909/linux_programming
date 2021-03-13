/*** pause.c ***/

#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void sigHandler(int signo){
    printf("Received Signal[%d]\n",signo);
}

int main(){
    int ret;
    struct sigaction act;
        act.sa_handler = sigHandler;
        sigaction(SIGALRM, &act, NULL);
        alarm(5);
        printf("Waiting for signal !!!\n");
        ret = pause();
        printf("return = %d\n",ret);
}