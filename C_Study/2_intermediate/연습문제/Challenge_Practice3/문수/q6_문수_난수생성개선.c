#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void test(int* i);

void main()
{
	int i[3];
	int* ptr = i;
	int index = 0;


	srand((int)time(NULL));
	/*
	i[0] = rand() % 9 + 0;
	i[1] = rand() % 9 + 0;
	i[2] = rand() % 9 + 0;

	while (i[0] == i[1] || i[0] == i[2] || i[1] == i[2])
	{
		i[0] = rand() % 9 + 0;
		i[1] = rand() % 9 + 0;
		i[2] = rand() % 9 + 0;
	}
	*/

	for (index; index < 3; index++) {
		i[index] = rand() % 10;

		if (index == 1 && i[0] == i[1]){
			index--;
		}
		else if (index == 2 && (i[0] == i[2] || i[1] == i[2])) {
			index--;
		}
	}



	printf("%d %d %d \n\n", i[0], i[1], i[2]);

	test(ptr);

}





void test(int *i)
{
	int number=0;
	int strike = 0;
	int ball = 0;
	int a;
	int b;
	int input[3] ;

	while (1)
	{
		printf("0~9 사이의 서로 다른 3개의 숫자 선택 ex)1 2 8 :  ");
		scanf("%d %d %d", &input[0], &input[1], &input[2]);


		
		
		for (a=0; a < 3; a++)
		{
			for (b=0;b < 3; b++)
			{
				if (i[a] == input[b] && a == b)
					strike++;
				else if (i[a] == input[b] && a != b)
					ball++;
			}
		}
		number++;
		printf("%d번째 도전 결과: %dstrike, %dball!! \n\n",number,strike, ball);

		if (strike == 3)
			return;

		strike = 0;
		ball = 0;
	}
}


