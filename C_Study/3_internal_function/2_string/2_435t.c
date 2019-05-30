#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str[100];
	char* str2="1234567";
	scanf("%s", str);
	printf("%u \n", strlen(str));
	printf("%u \n", strlen(str2));
}
