#include <stdio.h>
/*
 * 논리 부정연산자 (Not)
 * 거짓(0)은 1로 변환
 * 참(0이 아닌 값)은 0으로 변환
 */
void main(){
	int num1=1;
	int num2=0;
	int num3=100;
	int num4=-1;
	int result=0;

	result = (!num1);
	printf("!num1 	=> 결과: %d\n", result);

	result = (!num2);
	printf("!num2 	=> 결과: %d\n", result);

	result = (!num3);
	printf("!num3 	=> 결과: %d\n", result);

	result = (!num4);
	printf("!num4 	=> 결과: %d\n", result);

}
