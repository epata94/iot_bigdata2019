#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main() {
	int your_number;
	int computer_number;
	int win=0;
	int drew=0;
	int index;
	int rock = 1;
	int scissors = 2;
	int paper = 3;

	srand((int)time(NULL));

	while (1) {
		computer_number = rand() % 10;
		if (computer_number < 3) {
			printf("바위는 1, 가위는 2, 보는 3: ");
			scanf("%d", &your_number);
			if (computer_number + 1 == your_number) {
				printf("비겼습니다\n");
				drew++;
				continue;
			}
			if (your_number == rock) {
				if (computer_number + 1 == scissors) {
					printf("당신은 주먹 선택, 컴퓨터는 가위 선택, 이겼습니다\n");
					win++;
					continue;
				}
				else if (computer_number + 1 == paper) {
					printf("당신은 주먹 선택, 컴퓨터는 보 선택, 졌습니다\n");
					break;
				}
			}
			if (your_number == scissors) {
				if (computer_number + 1 == paper) {
					printf("당신은 가위 선택, 컴퓨터는 보 선택, 이겼습니다\n");
					win++;
					continue;
				}
				else if (computer_number + 1 == rock) {
					printf("당신은 가위 선택, 컴퓨터는 바위 선택, 졌습니다\n");
					break;
				}
			}
			if (your_number == paper) {
				if (computer_number + 1 == rock) {
					printf("당신은 보 선택, 컴퓨터는 바위 선택, 이겼습니다\n");
					win++;
					continue;
				}
				else if (computer_number + 1 == scissors) {
					printf("당신은 보 선택, 컴퓨터는 가위 선택, 졌습니다\n");
					break;
				}
			}
		}
	}
	printf("\n게임의 결과: %d 승, %d 무\n", win, drew);
}