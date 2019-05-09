#include <stdio.h>

void main(){
	int accumulated_total=0;

	printf("혜경이의 5월 총 수입: %d\n", accumulated_total);

	accumulated_total+=10000;
	printf("5월 1일 혜경이의 5월 총 수입: %d\n", accumulated_total);

	// 아래에서 =+ 대입연산자가 아니다.
	// 양수 30000 의 값이 재 할당 되었을 뿐이다.
	// 대입연산자는 아래와 같이 순서 하나 잘못사용하는 것으로 인해
	// 기능상의 오류를 발생할 수 있다.
	// 따라서 정밀도와 오류허용을 엄격히 제한되어야 하는 소프트웨어 개발시
	// 대입연산자를 사용하지 않는 것을 권고하고 있다.
	accumulated_total=+30000;
	printf("5월 3일 혜경이의 5월 총 수입: %d\n", accumulated_total);

	accumulated_total -= 5000;
	printf("큰고개 식당에서 5000원 점심값 지출\n");
	printf("5월 3일 혜경이의 5월 총 수입: %d\n", accumulated_total);

	// 여기서 -는 부호를 나타내는 부호(sign) 연산자이다.	
	accumulated_total =- 20000;
	printf("VIPS에서 남자친구와  20000원 저녁값 지출\n");
	printf("5월 3일 혜경이의 5월 총 수입: %d\n", accumulated_total);
}
