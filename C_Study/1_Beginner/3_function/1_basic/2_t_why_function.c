#include <stdio.h>

void my_add(){
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
	my_add();
	my_add();
	/*
	my_substraction();
	my_multiplication();
	my_multiplication();
	my_division();
	*/

}

