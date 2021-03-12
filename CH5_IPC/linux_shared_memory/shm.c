/*** shm.c ***/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <sys/wait.h>

int main(){
    int n ,pid, shmid, *count, status;
    /* Get shared Memory */
    shmid = shmget(IPC_PRIVATE, sizeof(*count),0666);
    /* Connet shared memmory */
    count = (int *)shmat(shmid, NULL, 0);
    /* Init shared Memory */
    *count = 0;
    pid = fork();
    if (pid > 0 ){ /* parrent process*/
        for (n = 0; n<100000; n++)
            *count = *count +1;
        wait(&status);
        printf("count = %d\n", *count);
        /* Detach shared Memory */
        shmdt(count);
        /* Delete shared memory*/
        shmctl(shmid, IPC_RMID, NULL);
    }
    else if(pid == 0){ /* child process */
        for(n=0; n<100000; n++)
            *count = *count -1;
    }
}