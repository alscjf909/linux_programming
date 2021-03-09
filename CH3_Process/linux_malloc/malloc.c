/*** malloc.c ***/

#include <stdio.h>
#include <stdlib.h>

extern char etext, edata, end;

int g1 = 1;
int g2;
int main(){
    static int s;
    int *m;
    int i1, i2 = 2;

    m = malloc(1024);

    printf("main = %10p\n",main);
    printf("etext = %10p\n\n", &etext);
    printf("g1 =    %10p\n", &g1);
    printf("edata = %10p\n\n",&edata);
    printf("s=      %10p\n",&s);
    printf("g2 =    %10p\n\n",&g2);
    printf("end =   %10p\n\n", &end);
    printf("m =     %10p\n",m);
    printf("i1 =    %10p\n", &i1);
    printf("i2 =    %10p\n", &i2);
}