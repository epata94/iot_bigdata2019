#include <stdio.h>

void main(){

	int limitIndex = 9;
	int SnailMatrix[10][10] = { 0 };
	int i=0;
	int j=0;
	int integerFact = 1;
			
	limitIndex = limitIndex - 1;

	while (limitIndex > 10 / 2 - 1) {
		for (; j < limitIndex; j++) {
			SnailMatrix[i][j] = integerFact;
			integerFact++;
		}

		for (; i < limitIndex; i++) {
			SnailMatrix[i][j] = integerFact;
			integerFact++;
		}
		limitIndex--;
		for (; j > 8 - limitIndex; j--) {
			SnailMatrix[i][j] = integerFact;
			integerFact++;
		}
		for (; i > 9 - limitIndex; i--) {
			SnailMatrix[i][j] = integerFact;
			integerFact++;
		}
	}

	SnailMatrix[i][j] = 100;  // 100�� ������� ������(10)�� ����
	
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%4d", SnailMatrix[i][j]);
		}
		printf("\n\n");
	}
}