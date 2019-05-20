#include <stdio.h>
#pragma warning (disable:4996)

int SimpleFuncOne(void) {
	// 함수안에 선언된 변수를 local variable(지역 변수)이라고 한다.
	// local variable의 생명주기는 함수가 실행되는 동안(함수 시작~함수 종료)
	// 서로 다른 함수에서는 같은 이름의 변수 사용이 가능하다. 
	// 하지만 완전히 다른 변수이다.
	// local 변수의 접근은 해당 함수에서만 가능하다.
	int num = 10;
	num++;
	printf("SimpleFuncOne num: %d \n", num);
	return 0;
}

int SimpleFuncTwo(void) {
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2: %d %d\n", num1, num2);
	// 아래 num이란 변수는 현재 SimpleFuncTwo함수에 존재하지 않는 변수이기 때문에
	// 컴파일 에러를 발생한다.
	// num++;
	return 0;
}

void main() {
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	// 잘못된 변수 접근
	// 현재 위치에서 SimpleFuncTwo local variable의 접근 범위(scope)를 벗어나있다.
	// num1++;
	// num2--;
	printf("main num: %d\n", num);
}