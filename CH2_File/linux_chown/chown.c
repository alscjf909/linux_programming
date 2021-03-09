/*** chown.c ***/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    if(chown(argv[1], 1000, 1000) != -1)
        printf("%s changed !!!\n", argv[1]);
    else
        printf("%s may not be changed !!!\n", argv[1]);
} //sudo changed
}