#include <stdio.h>

void main(){
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);

	// num이 음수일 경우에 12번, 15번 라인이 불필요하게 수행되었다. 이는 개선이 필요하다.
	if(num<0){
		printf("입력 값은 0보다 작다. \n");
	}
	if(num>0){ 
		printf("입력 값은 0보다 크다. \n");
	}
	if(num==0){
		printf("입력 값은 0이다. \n");
	}

}

