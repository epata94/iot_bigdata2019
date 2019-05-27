#include <stdio.h>

void main(){
	int num1=7;
// *의 위치는 자유롭게 써도 상관이 없다. 일반적으로 아래 또는 아래 아래 코드
// 를 사용한다.
	int *pnum;
//	int* pnum;
//	int * pnum;
//	int*pnum;

	pnum = &num1;

	printf("num1: %d\n", num1);
	printf("*pnum: %d\n", *pnum);

}
