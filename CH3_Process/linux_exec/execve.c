/*** execve.c ***/

#include <stdio.h>
#include <unistd.h>

int main(){
    char *argv[] = {"./env",NULL};
    char *envp[] = {"HOME = /home", NULL};
    execve("./env",argv, envp);
}