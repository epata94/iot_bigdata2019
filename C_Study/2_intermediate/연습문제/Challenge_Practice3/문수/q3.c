#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main()
{
	int i;
	printf("������ ���� 0���� %d���� \n", RAND_MAX);
	for (i = 0; i < 5; i++)
		printf("���� ���: %d \n", rand()%100);
}


