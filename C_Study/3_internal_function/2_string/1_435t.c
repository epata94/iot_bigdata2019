#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	char str[]="1234567";
	char str2[100];
	char* str3 = "Hello World!";

	scanf("%s", str2);

	printf("%s strlen(str): %u \n",str, strlen(str));
	printf("%s strlen(str2): %u \n",str2, strlen(str2));
	printf("%s strlen(str3): %u \n",str3, strlen(str3));
}
