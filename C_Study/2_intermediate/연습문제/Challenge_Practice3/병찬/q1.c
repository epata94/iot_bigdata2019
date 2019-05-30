#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int array1[4][4] = {
	{ 1, 2, 3, 4},
	{ 5, 6, 7, 8},
	{ 9, 10, 11, 12 },
	{13, 14, 15, 16}
	};
	int array2[4][4];
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%2d", array1[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			array2[j][3-i] = array1[i][j];
		}
	}

	printf("\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%2d", array2[i][j]);
		}
		printf("\n");
	}
}