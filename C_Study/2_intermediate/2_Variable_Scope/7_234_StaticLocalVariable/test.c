#include <stdio.h>
#pragma warning (disable:4996)

void SimpleFunc(void) {
	// static 변수는 함수가 여러번 호출된다 하더라도 그 값이 
	// 소멸되지 않고 연속성을 유지한다.
	static int num1 = 0;	// 초기화하지 않으면 0 초기화
	int num2 = 0;
	num1++, num2++;
	printf("static: %d, local: %d\n", num1, num2);
}

void main() {
	int i;
	for (i = 0; i < 3; i++)
		SimpleFunc();
}