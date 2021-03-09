/*** th_return.c ***/

#include <stdio.h>
#include <pthread.h>

struct two_val {
    int x,y;
};

void *sum(void *param){
    struct two_val *p = (struct two_val *)param;
    int ret;
        ret = p->x + p->y;
        return (void *) ret;
}

int main(){
    pthread_t tid;
    int ret_val;
    struct two_val tid_arg;
        tid_arg.x = 10;
        tid_arg.y = 20;
        pthread_create(&tid, NULL, &sum, &tid_arg);

        pthread_join(tid, (void *) &ret_val);
        printf("10 + 20= %d\n", ret_val);
}