/*** one.c ***/

#include <stdio.h>

extern int two();
int main(){
	printf("call two.o\n");
	two();
	printf("end one.o\n");

}
