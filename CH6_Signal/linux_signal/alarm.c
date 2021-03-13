/*** alarm.c ***/

#include <stdio.h>
#include <unistd.h>

int main(){
    int sec = 0;
    alarm(5);
    for(;;){
        sleep(1);
        printf("%d sec\n", ++sec);
    }
}