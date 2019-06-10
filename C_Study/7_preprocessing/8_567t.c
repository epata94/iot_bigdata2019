#include <stdio.h>
#define DEBUG	1
#pragma warning (disable:4996)

void main() {
	int num1, num2;

	puts("main] debug1");
	printf("두 개의 정수 입력: ");
	puts("main] debug2");
	scanf("%d %d", &num1, &num2);
	puts("main] debug3");

	puts("main] debug4");
	printf("%d + %d = %d\n", num1, num2, num1 + num2);

	puts("main] debug5");
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	puts("main] debug6");
}
