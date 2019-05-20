#include <stdio.h>

// 함수 원형 (Function Prototype)
// 아래와 같이 함수 정의부가 함수 호출 보다 앞에 정의가 되어 있는 상황에서
// 함수 선언을 할 필요가 있을까?
// 함수 선언을 할 필요가 있다.
// 특정 임베디드 컴파일러는 무조건 함수 선언을 해야지 함수를 사용할 수 있게 설계되어 있다.
// 따라서 특정 컴파일러에서 함수 선언을 하지 않고도 정상 동작했던 코드가 
// 비정상적(컴파일에러, 런타임에러)으로 동작할 수 있다.
// 또한 전체적인 프로그램의 구조를 이해하는 측면에서도 함수 선언을 코드 제일 앞에 해주는 것은
// 코드의 가독성, 이해성을 높이는데 도움이 된다.
// 함수 선언은 일반적으로 헤더 include문 다음에 위치한다.
void my_add(void); // 함수 선언 (Function Declaration)

void my_add(void){ // 함수 정의부 (Function Definition)
	int number1;
	int number2;
	int result;

	printf("두 수를 입력하세요: ");
	scanf("%d %d",&number1, &number2);

	printf("\n- 간단한 덧셈 연산 ver1\n");
	printf("첫 번째 입력: %d\n", number1);
	printf("두 번째 입력: %d\n", number2);

	result = number1 + number2;
	printf("%d + %d = %d\n",number1, number2, result);
}

void main(){ 
	my_add(); // 함수 호출(Function Call)
}

