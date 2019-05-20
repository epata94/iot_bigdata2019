#include <stdio.h>

void main(){
	int num, abs;

	printf("정수 입력: ");
	scanf("%d", &num);

	// ? <= 삼항연산자(Ternary Operator)
	// [상수|변수|조건식] ? 명령문1 : 명령문2;
	// Step1] ? 앞의 [상수|변수|조건식]를 평가한다.
	// CASE1] Step1의 결과가 참이면 명령문1을 수행한다.
	// CASE2] Step1의 결과가 거짓이면 명령문2을 수행한다.
	// 장점: 간단한 피연산자로 구성된 처리라면 간결하게 프로그래밍 할 수 있다.
	// 단점
	//  - 한 개의 명령문(Statement)만 처리하는데 용이하다. 따라서 복잡한 명령문을 표현할 수 없다.
	//  - 임베디드 환경에서는 일반적으로 사용하지 않도록 권고하고 있다.
	abs = num>0 ? num:num*(-1);

	//위 프로그램은 아래와 같다.
	/*
	if (num>0){
		abs = num;
	}else{
		abs = num*(-1);
	}
	*/


	printf("절댓값: %d \n", abs);
}

