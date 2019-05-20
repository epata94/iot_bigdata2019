#include <stdio.h>

void main(){
	// 1라인에 1개의 변수 선언
	int number1=0;

	// 1라인에 2개의 변수 선언
	int number2=1, number3=3;
	// 1라인에 여러개의 변수를 선언하고 싶을 경우에는 같은 타입의 변수만
	// 가능하다. 아래 코드는 타입이 달라서 Compile Error가 발생된다.
	// int number2=1, number3=3, float number4=4.23123;

	printf("number1=%d\n", number1);
	printf("number2=%d\n", number2);
	printf("number3=%d\n", number3);
	// printf("number4=%f\n", number4);
}
