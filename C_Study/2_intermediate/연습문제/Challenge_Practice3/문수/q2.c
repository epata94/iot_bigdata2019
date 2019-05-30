#include <stdio.h>
#pragma warning (disable:4996)

void main()
{

	int record[100][100];

	int i = 0;
	int j = 0;
	int a;
	int r;
	int b = 0;
	int total = 0;

	printf("100이하의 정수 입력: ");
	scanf("%d", &a);
	r = a;

	while (total < r*r)
	{
		for (; j < a && total < r*r ; j++ )
		{
			total++;
			record[i][j] = total;
		}
		j--;
		i++;

		for (; i < a && total < r*r;i++)
		{
			total++;
			record[i][j] = total;
		}
		i--;
		j--;
		a--;



		for (; j >= b && total < r*r; j--)
		{
			total++;
			record[i][j] = total;
		}
		j++;
		i--;
		b++;



		for (; i >= b && total < r*r; i--)
		{
			total++;
			record[i][j] = total;
		}
		i++;
		j++;
	}




	for (i = 0; i < r; i++)
	{
		for (j = 0; j < r; j++)
		{
			printf("%d\t", record[i][j]);
		}
		printf("\b");
		printf("\n");
	}
}


