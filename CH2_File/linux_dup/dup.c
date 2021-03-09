/*** dup.c ***/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]){
        int fd, newfd1, newfd2;
                fd = creat(argv[1],0644);
                printf("fd = %d\n", fd);

        newfd1 = dup(2);
        printf("newfd1 = %d\n", newfd1);
        write(newfd1, "Hello!!!\n",9);

        newfd2 = dup2(fd,2);
        printf("newfd2 = %d\n", newfd2);
        write(newfd2, "Hllo!!!!\n",9);

}

