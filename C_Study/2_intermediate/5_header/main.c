//#include <stdio.h>
// my_sum함수를 사용하기 위해
// my_head.h 헤더파일을 include
#include "my_head.h"
// <[헤더파일명> <==  <>를 사용하는 경우는 헤당 헤더파일이 PATH 환경변수에 
// 있는 경우
// "[헤더파일명]" <== ""를 사용하는 경우는 main함수가 있는 파일을 기준으로
// "[헤더파일명]" <== ""를 사용하는 경우는 main함수가 있는 파일을 기준으로
// 상대경로를 사용하는 경우

void main(){
	int result;

	result = my_sum(3,4);
	
//	printf("3+4=%d\n", result);
}

