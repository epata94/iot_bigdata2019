#include <stdio.h>
// 장점: 프로그래머가 원하는 지점으로 아무때나 제약없이 이동 가능
// 단점: 이동에 대해서 프로그래머가 의도하지 않았던 실수를 야기 할 수 있다.
// 결론: 현업(실무)에서는 goto문을 거의 사용하지 않는다.
void main(){
	int num;
	printf("자연수 입력: ");
	scanf("%d", &num);
// goto [레이블명]; 
// 해당 레이블로 이동한다.
	if(num==1)
		goto ONE;
	else if(num==2)
		goto TWO;
	else
		goto OTHER;

// [레이블명]: 
ONE:
	printf("1을 입력하셨습니다.!\n");
	goto END;
TWO:
	printf("2를 입력하셨습니다.!\n");
	goto END;
OTHER:
	printf("3 혹은 다른 값을 입력하셨군요! \n");
END:
	printf("END!");

}

