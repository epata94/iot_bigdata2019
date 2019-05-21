#include <stdio.h>
#pragma warning (disable:4996)
void main(){
	// 49자를 표현할 수 있는 변수를 선언
	// 문자열 변수의 크기는 처리할 문자열의 최대 사이즈를 고려하여
	// 선언한다.

	// 문자열 크기가 작은 경우 처리되어야 할 문자열이 누락될 수 있다.
	// char str[5];

	// 문자열 크기가 큰 경우 누락되는 데이터는 없지만 메모리의 낭비를
	// 초래한다.
	char str[6];
	int idx=0;

	// char는 1byte 한글은 2byte 따라서 아래 코드가 성립이 되지 않는다.
	// 컴파일러에 따라서 다양한 에러를 발생할 수 있다.
	str[0]='안';

	printf("입력 받은 문자열: %s \n", str);
/*
	printf("문자 단위 출력: ");
	while(str[idx] != '\0'){
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	*/
}

