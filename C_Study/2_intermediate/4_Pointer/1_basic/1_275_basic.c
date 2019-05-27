#include <stdio.h>

void main(){
	int num=7;
	int *pnum;
	pnum = &num;

	printf("num: %d\n", num);
	// %p 주소값을 출력하기 위한 옵션
	// 일반 변수를 선언하고 해당 변수의 주소값을 보려면
	// &[변수명]
	// ex) int num=7; => &num
	printf("&num: %p\n", &num);
	// 포인터 변수를 선언하고 해당 변수의 주소값을 보려면
	// 해당 변수명만 사용하면 된다.
	// ex) int *pnum; => pnum
	printf("pnum: %p\n", pnum);
	// 포인터 변수가 가리키는 값을 표현하려면
	// *[변수명] 으로 접근해야 한다.
	printf("pnum이 가리키는 값: %d\n",*pnum);

/* 출력결과

 num: 7
&num: 002EF7D8
pnum: 002EF7D8
pnum이 가리키는 값: 7
 */
}
