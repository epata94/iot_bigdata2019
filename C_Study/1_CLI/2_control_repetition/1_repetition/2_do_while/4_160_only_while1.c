#include <stdio.h>

void main(){
	// while문이 종료가 되는 조건이 변경될 때 마다 변수값의 초기값에
	// 이상이 없는지 추가로 관리를 해야 한다.
	int total=0, input_num=1;
	
	while(input_num!=0){
		printf("정수 입력(0 to quit): ");
		scanf("%d", &input_num);
		total = total + input_num;
	}


	printf("합계: %d \n", total);
}

