#include <stdio.h>

void main(){
	int total=0, input_num=0;
	

	printf("정수 입력(0 to quit): ");
	scanf("%d", &input_num);

	while(input_num!=0){
		total = total + input_num;
		printf("정수 입력(0 to quit): ");
		scanf("%d", &input_num);
	}

/*
	do{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &input_num);
		total = total + input_num;
	}while(input_num!=0);
*/

	printf("합계: %d \n", total);
}

