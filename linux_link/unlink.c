/*** unlink.c***/
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    unlink(argv[1]);
}