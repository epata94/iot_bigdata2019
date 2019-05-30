#include <stdio.h>
#include <stdlib.h>

void main(){
	int i;
	int limit=100;

	printf("난수의 범위: 0부터 %d까지 \n", limit-1);
	for(i=0; i<5; i++){
		printf("난수 출력: %d \n", rand()%limit);
	}
}
