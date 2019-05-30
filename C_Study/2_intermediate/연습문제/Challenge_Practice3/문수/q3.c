#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main()
{
	int i;
	printf("난수의 범위 0부터 %d까지 \n", RAND_MAX);
	for (i = 0; i < 5; i++)
		printf("난수 출력: %d \n", rand()%100);
}


