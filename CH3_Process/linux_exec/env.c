/*** env.c ***/

#include <stdio.h>

extern char **environ;
int main() {
    printf("My environment variables are:  \n");
    while(*environ)
        printf("  %s\n", *environ++);
}