#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main() {
	char* RSP[3] = { "Rock", "Scissors", " Paper" };
	int myIndex;
	int comIndex;
	int WinAndDraw[2] = { 0 };

	while (1) {

		printf("\nRock:1  Scissors:2  Paper:3  ");
		scanf("%d", &myIndex);
		myIndex = myIndex - 1;
		srand((int)time(NULL));
		comIndex = (rand() % 3);

		if ((myIndex == 0 && comIndex == 1) || (myIndex == 1 && comIndex == 2) || (myIndex == 2 && comIndex == 0)) {
			printf("\nYour choice : %s, Computer's choice : %s ... win\n"
				, *(RSP + myIndex), *(RSP + comIndex));
			WinAndDraw[0] = WinAndDraw[0] + 1;
		}
		else if (myIndex == comIndex) {
			printf("\nYour choice : %s, Computer's choice : %s ... draw\n"
				, *(RSP + myIndex), *(RSP + comIndex));
			WinAndDraw[1] = WinAndDraw[1] + 1;
		}
		else {
			printf("\nYour choice : %s, Computer's choice : %s ... lose\n"
				, *(RSP + myIndex), *(RSP + comIndex));
			break;
		}
	}
	printf("\nGame over\nYour score: win %d draw %d\n", WinAndDraw[0], WinAndDraw[1]);
}


/* Ver.2
	���Ǻ�Ȯ������ ���ǰ��� �����Ǹ�
	������������ ��� �̱��, ����, ���� Ȯ���� 1/3�� �������� Ȱ���Ͽ�
	switch������ �� ����� ����� �Ͽ� if�� ����� �ִ��� ������ �ڵ��Դϴ�.

void main() {

	int win_count=0;
	int draw_count=0;
	int is_lose = 0;
	int myIndex;
	int conseIndex;
	char *winCombi[3][2] = {
		{"Rock","Scissors"},
		{"Scissors","Paper"},
		{"Paper","Rock"}
	};

	char *loseCombi[3][2] = {
		{"Rock","Paper"},
		{"Scissors","Rock"},
		{"Paper","Scissors"}
	};

	char *drawCase[3] = { "Rock", "Scissors", "Paper" };

	srand((int)time(NULL));
	
	do {
		printf("\nRock:1  Scissors:2  Paper:3  ");
		scanf("%d",&myIndex);
		myIndex = myIndex - 1;
		conseIndex = (rand() % 3);
		
		switch (conseIndex) {

		case 0:
			printf("\nYour choice : %s, Computer's choice : %s ... win\n"
				, (*(winCombi + myIndex))[0], (*(winCombi + myIndex))[1]);
			win_count = win_count + 1;
			break;

		case 1:
			printf("\nYour choice : %s, Computer's choice : %s ... draw\n"
				, drawCase[myIndex], drawCase[myIndex]);
			draw_count = draw_count + 1;
			break;

		case 2:
			printf("\nYour choice : %s, Computer's choice : %s ... lose\n"
				, (*(loseCombi + myIndex))[0], (*(loseCombi + myIndex))[1]);
			is_lose = 1;
			break;
		}

	} while (is_lose == 0);

	printf("\nGame over\nYour score: win %d draw %d\n", win_count, draw_count);

*/