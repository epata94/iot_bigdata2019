#include <stdio.h>

void main(){
	int num1=100;
	int *pnum;

	pnum = &num1;

	printf("num1: %d\n", num1);
	printf("*pnum: %d\n\n", *pnum);

	num1=200;
	printf("num1: %d\n", num1);
	printf("*pnum: %d\n\n", *pnum);

	*pnum=300;
	printf("num1: %d\n", num1);
	printf("*pnum: %d\n", *pnum);

}
