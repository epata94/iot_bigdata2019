#include <stdio.h>

void main(){
	int number1=10;
	int number2;

	printf("number1 = %d\n", number1);
	// 초기화하지 않은 변수의 값은 일반적으로 쓰레기 값이 들어간다.
	// 컴파일러 버전, 종류에 따라 예외적으로 0으로 초기화 될 수도 있다.
	// 쓰레기(garbage) 값은 메모리 상황에 따라 임의의 값이 할당된다.
	// 현재 Visual Studion 2019 버전에서는 초기화 하지 않은 변수에 대해
	// 0으로 초기화 해준다.
	printf("number2 = %d\n", number2);
}
