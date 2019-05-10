#include <stdio.h>
// Shift Left: 비트를 왼쪽으로 N번 만큼 이동
int main(void){
	int num = 15;				// 00000000 00000000 00000000 00001111 
	int result1 = num << 1; 	// 00000000 00000000 00000000 00011110 => 30
	int result2 = num << 2; 	// 00000000 00000000 00000000 00111100 => 60
	int result3 = num << 3; 	// 00000000 00000000 00000000 01111000 => 120
	int max_num = 1073741824;	// 01000000 00000000 00000000 00000000
	int result4 = max_num << 1;

	printf("1칸 이동 결과: %d\n", result1);
	printf("2칸 이동 결과: %d\n", result2);
	printf("3칸 이동 결과: %d\n", result3);

	printf("\nMax number bit의 Shift Left 연산 테스트: %d\n", result4);
	// Shitf Left 연산일 경우에는 MSB 비트에도 영향을 준다.
}
