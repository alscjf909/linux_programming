/*** thread.c ***/

#include <stdio.h>
#include <pthread.h>

void *thread(void *unused){
    while(1)printf("X");
}
int main(){
    pthread_t tid;
    pthread_create(&tid, NULL, &thread, NULL);
    while(1) printf("O");
}