#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main()
{
	int i;
	srand((int)time(NULL));

	for (i = 0; i < 2; i++)
		printf("정수 출력: %d \n", rand()%7);
}


