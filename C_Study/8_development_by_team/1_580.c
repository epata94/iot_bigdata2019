// Declaration(선언) PART 1
// include 파일, 전처리 #define, 전역변수, 함수 원형(Function Prototype)

#include <stdio.h>

int num=0;


// Function(함수) PART 2
// 특정 기능을 수행하는 함수 정의부 
// 함수의 기능(역할) 및 SIZE에 따라 여러개의 파일로 분할이 가능하다.
void Increment(void){
	num++;
}

int GetNum(){
	return num;
}

// Controller PART 3
// main 전체 프로그램의 상위레벨의 실행을 결정 짓는 
// 컨트롤러(Controller)의 역할을 수행한다.
void main(){
	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
	Increment();
	printf("num: %d\n", GetNum());
}
