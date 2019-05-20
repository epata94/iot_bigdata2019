#include <stdio.h>

void main(){
	int multiplier=1;
	int times=2;
	printf("while문의 결과\n");
	while(multiplier<10){
		printf("%d * %d = %d\n", times, multiplier, times * multiplier);
		multiplier++;
	}

	multiplier=1;
	times=2;
	printf("\ndo while문의 결과\n");

	do{
		printf("%d * %d = %d\n", times, multiplier, times * multiplier);
		multiplier++;
	}while(multiplier<10);

}

