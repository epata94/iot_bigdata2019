#include <stdio.h>
// printf 함수의 프로토타입(Proto Type)
// int printf( const char *format [, argument]... );
// 리턴 값을 사용하지 않을 경우에는 무시해도 사용하는데는 문제가 없다.
void main(){
	int result=0;
	
	// printf 함수의 리턴 값은 출력된 전체 바이트 수를 리턴
	result = printf("1234567\n");
	printf("\"1234567\\n\" printf의 결과 %d\n", result);

	result = printf("abCD\n");
	printf("\"abCD\\n\" printf의 결과 %d\n", result);
	
	result = printf("!@#$^\n");
	printf("\"!@#$^\\n\" printf의 결과 %d\n", result);
	
	result = printf("가나다라\n");
	printf("\"가나다라\\n\" printf의 결과 %d\n", result);
}

