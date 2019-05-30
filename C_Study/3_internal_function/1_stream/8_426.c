#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str[7];
	int i;
	/*
	for (i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s\n", i + 1, str);
	}
	*/
	for (i = 0; i < 3; i++) {
		gets(str);
		printf("Read %d: %s\n", i + 1, str);
	}
	/* 실행 결과
	We
	Read 1: We
	like
	Read 2: like
	you
	
	Read 3: you
	*/
}
