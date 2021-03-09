/** mkdir.c **/

#include <unistd.h>

int main(int argc, char *argv[]){
    rmdir(argv[1]);
} // remove directory