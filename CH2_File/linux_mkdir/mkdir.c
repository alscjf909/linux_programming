/** mkdir.c **/

#include <sys/stat.h>

int main(int argc, char *argv[]){
    mkdir(argv[1], 0777);
} // make directory