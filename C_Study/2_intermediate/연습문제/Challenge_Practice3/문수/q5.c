#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning (disable:4996)

void main()
{
	int i;
	int input;
	char* c[3] = { "����","����","��" };
	int ��� = 0;
	int �̱� = 0;


	while (1)
	{
		printf("������1, ������2, ����3: ");
		scanf("%d", &input);
		srand((int)time(NULL));

		i = rand() % 3 + 1;

		if (i == input && i == 1)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�!\n", c[0], c[0]);
			���++;
		}

		else if (i == input && i == 2)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�!\n", c[1], c[1]);
			���++;
		}
		else if (i == input && i == 3)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, �����ϴ�!\n", c[2], c[2]);
			���++;
		}


		else if (i == 2 && input == 1)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�!\n", c[0], c[1]);
			�̱�++;
		}
		else if (i == 3 && input == 2)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�!\n", c[1], c[2]);
			�̱�++;
		}
		else if (i == 1 && input == 3)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �̰���ϴ�!\n", c[2], c[0]);
			�̱�++;
		}



		else if (i == 1 && input == 2)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�!\n", c[1], c[0]);
			break;
		}
		else if (i == 2 && input == 3)
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�!\n", c[2], c[1]);
			break;
		}
		else
		{
			printf("����� %s ����, ��ǻ�ʹ� %s ����, ����� �����ϴ�!\n", c[0], c[2]);
			break;
		}
	}
	printf("\n������ ���: %d��, %d��", �̱�, ���);
}


