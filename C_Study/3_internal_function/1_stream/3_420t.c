#include <stdio.h>

void main(){
	int ch1, ch2, ch3, ch4, ch5, ch6;

	ch1 = fgetc(stdin);
	ch2 = fgetc(stdin);
	ch3 = fgetc(stdin);
	ch4 = fgetc(stdin);
	ch5 = fgetc(stdin);
	ch6 = fgetc(stdin);

	fputc(ch1,stdout);
	fputc(ch2,stdout);
	fputc(ch3,stdout);
	fputc(ch4,stdout);
	fputc(ch5,stdout);
	fputc(ch6,stdout);
}

