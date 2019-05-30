#include <stdio.h>
#pragma warning (disable:4996)
#define SQUARE_SIZE 5
void main() {
	int array1[SQUARE_SIZE][SQUARE_SIZE];
	int number = 1;
	int i = 0;
	int j = 0;
	int k = 0;
	int finish_condition = SQUARE_SIZE / 2;

	while (1){
		for (; j < SQUARE_SIZE-1 - k; j++) {
			array1[i][j] = number;
			number++;
		}
		for (; i < SQUARE_SIZE-1 - k; i++) {
			array1[i][j] = number;
			number++;
		}
		for (; j > 0 + k; j--) {
			array1[i][j] = number;
			number++;
		}
		k++; 
		for (; i > 0 + k; i--) {
			array1[i][j] = number;
			number++;
		}
	}
	for (i = 0; i < SQUARE_SIZE; i++) {
		for (j = 0; j < SQUARE_SIZE; j++) {
			printf("%d\t", array1[i][j]);
		}
		printf("\n");

	}
}