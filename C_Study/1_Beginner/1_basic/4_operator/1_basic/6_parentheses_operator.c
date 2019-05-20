#include <stdio.h>

void main(){

		printf("result: %d\n", 10);
		printf("result: %d\n", 1+2);

		// +,-은 피연산자의 순서가 바뀌어도 상관이 없다.
		// 그 결과는 항상 동일하다.
		printf("result: %d\n", 1+2+3);
		printf("result: %d\n", 3+1+2);

		// *, / 인경우는 피연산자의 순서가 바뀔 경우
		// *, / 이 +,- 보다 우선순위가 높을 수 있다.
		printf("result: %d\n", 2*3+4);
		printf("result: %d\n", 4+2*3);

		// 사용자가 강제로 우선순위를 조정하고 싶을 경우에는
		// 괄호(parentheses) 연산자를 사용한다.
		printf("result: %d\n", (4+2)*3);
	
		// 아래 표현식의 결과는 동일하지만 컴파일러에 따라서 연산자
		// 적용원칙이 달라질 수 있기 때문에 명시적으로 괄호를 써주는 것이
		// 유지보수를 위하여 임베디드 개발자가 준수해야 할 코딩원칙이다.	
		printf("result: %d\n", 3+4*5);
		printf("result: %d\n", 3+(4*5));

		int num1=10;
		//int num2=(num1--)+2;
		int num2=num1--+2;

		printf("num1: %d \n", num1);
		printf("num2: %d \n", num2);
}
