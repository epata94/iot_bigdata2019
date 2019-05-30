#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	char str1[30] = "Simple String";
	char str2[30];
	char* str3 = str1;

	strcpy(str2, str1);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);

	str2[7] = 's';
	printf("\nstr1: %s\n", str1);
	printf("str2: %s\n", str2);

	str3[7] = 's';
	printf("\nstr1: %s\n", str1);
	printf("str3: %s\n", str3);
}
