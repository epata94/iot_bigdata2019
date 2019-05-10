#include <stdio.h>

void main(){
	int num1=10, num2=12, result;

	printf("num1: %d, num2: %d\n", num1, num2);

	// =< 라는 관계 연산자는 C에서 지원하지 않음 (일반적으로 다른 언어에서도 동일함
	// 따라서 <= 로 바꿔주어야함
//	result = (num1 =< num2);
//	printf("(num1 =< num2) => 평가결과: %d\n", result);

	result = (num1);
	printf("(num1) => 평가결과: %d\n", result);
	
	result = (10);
	printf("(10) => 평가결과: %d\n", result);
}
