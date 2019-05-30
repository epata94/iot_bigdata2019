#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

void main() {
	char str[100];
	
	//printf("문자열 입력: ");
	fputs("문자열 입력: ", stdout);
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);
}
