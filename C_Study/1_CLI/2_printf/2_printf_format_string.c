#include <stdio.h>

void main(){
	printf("나는 사과를 1개 먹었다.\n");
	// %d <= format string
	// 숫자 10은 c언어에서 정수 또는 상수로 부른다.
	// 정수는 숫자를 의미한다.
	// 상수는 변하지 않는 값을 의미한다.
	printf("나는 딸기를 %d개 먹었다.\n", 10); 
	// "" 안의 format string은 , 뒤의 값과 순차적으로 매칭된다.
	printf("나는 자두를 %d개 먹었고 체리 %d개를 먹었습니다.\n", 2,4);
	printf("아~~ 배부르다!");
}
