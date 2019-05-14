#include <stdio.h>

void main(){
	double total=0.0;
	double input=0.0;
	int num=0;
	// 아래와 같은 for문은 while문으로 대체 하는 것이 좋음
	for(;input>=0.0;){
		total+=input;
		printf("실수 입력(minus to quit) : ");
		scanf("%lf", &input);
		num++;
	}
	printf("평균: %f \n", total/(num-1));
}

