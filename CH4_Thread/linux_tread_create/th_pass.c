/*** th_pass.c ***/

#include <stdio.h>
#include <pthread.h>

void *thread(void *used){
    char *p = (char *)used;
    for(;;)
        putc(*p,stderr);
}

int main(){
    pthread_t tid1, tid2;
    char arg1 = 'O', arg2 ='X';
        pthread_create(&tid1,NULL,&thread,&arg1);
        pthread_create(&tid2,NULL,&thread,&arg2);
        for(;;)
            ;
}