#include <stdio.h>
// sizeof 연산자: 출력은 변수 또는 사이즈의 byte수
// typedef char LG_char <= 사용자 정의 타입
// typedef char LG_small_num <= 사용자 정의 타입
int main(){
	// int, char, short <= 원시 타입(Native Type)

	char c_number=9; // c_ <= 해당 변수의 타입을 유추할 수 있는 prefix이다.
	int i_number=1052;
	double d_number=3.1415;

	// 변수의 size 구하기 
	printf("===========  변수의 size 구하기 ===========\n");
	printf("변수 c_number의 크기: %d \n", sizeof(c_number));
	printf("변수 i_number의 크기: %d \n", sizeof(i_number));
	printf("변수 d_number의 크기: %d \n\n", sizeof(d_number));

	// 변수 type의 size 구하기
	printf("========  변수 type의 size 구하기 ========\n");
	printf("char의 크기: %d\n", sizeof(char));
	printf("signed char의 크기: %d\n", sizeof(signed char));
	printf("unsigned char의 크기: %d\n\n", sizeof(unsigned char));
	
	printf("int의 크기: %d\n", sizeof(int));
	printf("signed int의 크기: %d\n", sizeof(signed int));
	printf("unsigned int의 크기: %d\n", sizeof(unsigned int));
	
	printf("short의 크기: %d\n", sizeof(short));
	printf("short int의 크기: %d\n", sizeof(short int));
	printf("signed short int의 크기: %d\n", sizeof(signed short int));
		
}
