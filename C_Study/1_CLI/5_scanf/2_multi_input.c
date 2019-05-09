// 교재 73
#include <stdio.h>

void main(){
	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	//마지막 입력 이전의 입력들의 구분자는 공백문자이다.
	// 구분자(separator, delimiter)
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1+num2+num3;

	printf("%d + %d + %d = %d\n", num1, num2, num3, result);
}
