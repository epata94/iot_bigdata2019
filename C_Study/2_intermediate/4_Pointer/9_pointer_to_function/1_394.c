#include <stdio.h>

void SimpleAdder(int, int);
void SimpleSubstraction(int, int);
void ShowString(char*);

void main(void){
	char * str="Pointer to Function";
	int num1=10, num2=20;

//	void (*fptr1)(int, int) = SimpleAdder;
	void (*fptr1)(int, int) = SimpleSubstraction;
	// 컴파일시에 Pointer to Function의 함수 원형과 매칭이될 함수의 원형이
	// 일치하는지에 대한 정합성 검사는 이루어 지지 않는다.
	// 따라서 잘못된 함수의 이름(주소)를 매칭했을 경우에는 런타임 에러가
	// 발생한다.
	//void (*fptr1)(int, int) = ShowString;
	void (*fptr2)(char*) = ShowString;

	fptr1(num1, num2);
	fptr2(str);
}

void SimpleAdder(int n1, int n2){
	printf("%d + %d = %d\n", n1,n2, n1+n2);
}

void SimpleSubstraction(int n1, int n2){
	printf("%d - %d = %d\n", n1,n2, n1-n2);
}

void ShowString(char* str){
	printf("%s \n", str);
}
