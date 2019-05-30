#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main() {
	int num1, num2, num3;
	int* ptr1 = &num1, * ptr2 = &num2, * ptr3 = &num3;
	int* ptr[] = { ptr1, ptr2, ptr3 };

	int random_array[3];
	int index;
	int index2;
	int strike = 0;
	int ball = 0;
	int counter = 0;

	srand((int)time(NULL));

	for (index = 0; index < sizeof(random_array) / sizeof(int); index++) {
		random_array[index] = rand() % 10;
	}
	for (index = 0; index < sizeof(random_array) / sizeof(int); index++) {
		printf("%d ", random_array[index]);
	}
	
	printf("\n");

	while (strike<3) {
		printf("숫자3개 입력: ");
		scanf("%d %d %d", &num1, &num2, &num3);

		counter++;
		strike = 0;
		ball = 0;
		for (index = 0; index < 3; index++) {
			for (index2 = 0; index2 < 3; index2++) {
				if (*(ptr[index]) == random_array[index2]) {
					if (index == index2) {
						strike++;
					}else {
						ball++;
					}
				}
			}
		}

		printf("\n%d 번째 도전 결과: %d strike, %d ball\n\n",counter, strike, ball);
	}

	printf("Game over");
}
