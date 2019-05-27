#include <stdio.h>

void main(){
	int num=7;
	double *pnum;

	// 포인트 변수는 같은 타입에 변수의 주소만 할당 받을 수 있다.
	// 상황에 따라 다양한 에러가 발생한다.
	*pnum = &num;

	printf("num: %d\n", num);
	printf("*pnum: %llf\n", *pnum);

}
