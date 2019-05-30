#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main()
{
	int i;
	int input;
	char* c[3] = { "바위","가위","보" };
	int 비김 = 0;
	int 이김 = 0;


	while (1)
	{
		printf("바위는1, 가위는2, 보는3: ");
		scanf("%d", &input);
		srand((int)time(NULL));

		i = rand() % 3 + 1;

		if (i == input && i == 1)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", c[0], c[0]);
			비김++;
		}

		else if (i == input && i == 2)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", c[1], c[1]);
			비김++;
		}
		else if (i == input && i == 3)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", c[2], c[2]);
			비김++;
		}


		else if (i == 2 && input == 1)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다!\n", c[0], c[1]);
			이김++;
		}
		else if (i == 3 && input == 2)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다!\n", c[1], c[2]);
			이김++;
		}
		else if (i == 1 && input == 3)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다!\n", c[2], c[0]);
			이김++;
		}



		else if (i == 1 && input == 2)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", c[1], c[0]);
			break;
		}
		else if (i == 2 && input == 3)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", c[2], c[1]);
			break;
		}
		else
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", c[0], c[2]);
			break;
		}
	}
	printf("\n게임의 결과: %d승, %d무", 이김, 비김);
}


