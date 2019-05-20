#include <stdio.h>

void main(){
	int num;
	printf("1이상 5이하의 정수 입력: ");
	scanf("%d", &num);

	// 장점
	// - 변수와 매칭이되는 상수 구조에서 if, else if, else 구조 보다 간결하게 구조화할 수 있다.
	//
	// 단점
	// - 변수와 매칭이 되는 구조만 가능하다. 
	//  (조건식 표현이 불가능: ex) 범위 지정
	// - 중첩되는 case 사용이 불가능 하다.
	switch(num){
		case 1:
			printf("1은 ONE \n");
			break;
		case 2:
			printf("2은 TWO \n");
			break;
		case 3:
			printf("3은 THREE \n");
			break;
		case 4:
			printf("4은 FOUR \n");
			break;
		case 5:
			printf("5은 FIVE \n");
			break;
		default:
			printf("I don't konw!\n");
	}
}

