/*** execle.c ***/

#include <stdio.h>
#include <unistd.h>

int main() {
    char * envp[] = {"HOME = /home", NULL};
    execle("./env","./env",NULL,envp);
}