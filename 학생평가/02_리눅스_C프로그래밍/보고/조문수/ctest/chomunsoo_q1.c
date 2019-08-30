// 조문수
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

	puts("도서 정보 입력");
	for (index = 0; index < NUMBER; index++)
	{
		printf("저자: ");
		fgets(ptr[index].name, sizeof(ptr[index].name), stdin);
		printf("제목: ");
		fgets(ptr[index].title, sizeof(ptr[index].title), stdin);
		printf("페이지 수: ");
		fgets(ptr[index].page, sizeof(ptr[index].page), stdin);

	}

	printf("\n");

	for (index = 0; index < NUMBER; index++)
	{
		printf("book %d\n", index + 1);
		printf("저자: %s", ptr[index].name);
		printf("제목: %s", ptr[index].title);
		printf("페이지 수: %s", ptr[index].page);
	}

	free(ptr);
}