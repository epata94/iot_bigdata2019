#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main() {
	int counter;
	int random_number;

	printf("난수의 범위: 0부터 %d까지 \n", RAND_MAX);
	for (counter = 0; counter < 5;) {
		printf("난수의 출력: %d \n", rand() % 100);
		counter++;
		
	}
}