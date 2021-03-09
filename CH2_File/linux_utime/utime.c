/*** utime.c ***/
#include <stdio.h>
#include <sys/stat.h>
#include <utime.h>

int main(int argc, char *argv[]){
    struct stat buf;
    struct utimbuf time;

    stat(argv[1], &buf);
    time.actime = buf.st_atime;
    time.modtime =buf.st_mtime;
    utime(argv[2], &time);
} // chang access time and or modify time