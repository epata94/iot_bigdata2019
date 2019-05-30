#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main() {

	int ball_count=0;
	int strike_count=0;
	int initial_RN[3];
	int input_RN[3];
	int gameIndex = 0;
	int i=0;
	int j;

	while (i < 3) {
		initial_RN[i] = ((rand() % 9) + 1);
		for (j = 0; j < i; j++) {
			if (initial_RN[i] == initial_RN[j]) {
				initial_RN[i] = ((rand() % 9) + 1);
				j = 0;
			}
		}
		i = i + 1;
	}
	
	printf("Start Game!\n");
	do {
		strike_count = 0;
		ball_count = 0;
		gameIndex = gameIndex + 1;
		printf("Input three different number(ex1 2 3): ");
		scanf("%d %d %d", &input_RN[0], &input_RN[1], &input_RN[2]);

		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (initial_RN[i] == input_RN[j]) {
					if (i == j) {
						strike_count = strike_count + 1;
					}
					else {
						ball_count = ball_count + 1;
					}
				}
			}
		}

		printf("\n%d consequences = %dStrike, %dBall\n\n", gameIndex, strike_count, ball_count);
		
	} while (strike_count<3);

	printf("\nGAME OVER");
}