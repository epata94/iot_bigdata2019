#include <stdio.h>
// 함수 유형 1
// 반환타입 X, 인자 X (반환타입이 없고 인자도 없는 케이스)
// void의 의미는 없다(nothing), 정의하지 않겠다.
// 그리고 인자가 없을 경우에는 void를 생략 할 수 있다.
//void my_add(){
// 아래와 같이 함수의 반환 타입을 생략하면 일반적으로는 컴파일 에러가 발생한다. (특히 임베디드 컴파일러)
// 단 현재 visual studio c 컴파일러에서는 이를 허용하고 있다.
// 따라서 유지 보수를 위하여 절대로 생략하지 말것!
// my_add(void){
void my_add(void){ // 함수 정의 (Function Definition)
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

void main(){ // main함수는 C언어로 작성하면 프로그램 실행시 자동으로 호출되는 함수
			 // 따라서 C 프로그램의 시작점(Entry Point)이 된다.
	printf("-- 메인 프로그램 구동 -- \n");
	
	my_add(); // 함수 호출(Function Call)

	printf("-- 메인 프로그램 종료 -- \n");
}

