// ������
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUMBER 3
#define NAME 20
#define TITLE 40
#define PAGE 10

typedef struct
{
	char name[NAME];
	char title[TITLE];
	char page[PAGE];
}info;

void main()
{
	int index;
	info* ptr = (info*)malloc(sizeof(info) * NUMBER);

	puts("���� ���� �Է�");
	for (index = 0; index < NUMBER; index++)
	{
		printf("����: ");
		fgets(ptr[index].name, sizeof(ptr[index].name), stdin);
		printf("����: ");
		fgets(ptr[index].title, sizeof(ptr[index].title), stdin);
		printf("������ ��: ");
		fgets(ptr[index].page, sizeof(ptr[index].page), stdin);

	}

	printf("\n");

	for (index = 0; index < NUMBER; index++)
	{
		printf("book %d\n", index + 1);
		printf("����: %s", ptr[index].name);
		printf("����: %s", ptr[index].title);
		printf("������ ��: %s", ptr[index].page);
	}

	free(ptr);
}