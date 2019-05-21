#include <stdio.h>

void main(){
	// 문자열은 ""안에 정의를 한다.
	// 그럼 마지막에 자동으로 NULL 값이 추가가 된다.
	char str[] = "Good morning!";

	// char는 1byte
	// G ~ ! 13글자 따라서 13byte
	// 여기에 NULL 추가 되어서 14byte
	printf("배열 str의 크기: %d\n", sizeof(str));
	printf("널 문자 문자형 출력: %c \n", str[13]);
	printf("널 문자 정수형 출력: %d\n", str[13]);

	str[12]='?';
	printf("문자열 출력: %s\n", str);
}

