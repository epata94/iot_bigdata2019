// 구범진
#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
#define MAX_BOOK_NUM 3
#define A_size 30
#define T_size 30
#define P_size 10

typedef struct {
	char author[A_size];
	char title[T_size];
	char pages[P_size];
}BooksLinfo;

int main() {
	int index = 0;
	BooksLinfo* westLibrary[MAX_BOOK_NUM];

	for (index = 0; index < MAX_BOOK_NUM; index++)
	{
		westLibrary[index] = malloc(sizeof(BooksLinfo));
	}

	puts("도서 정보 입력");

	for (index = 0; index < MAX_BOOK_NUM; index++)
	{
		fputs("저자: ",stdout);
		gets(westLibrary[index]->author);
		fputs("제목: ",stdout);
		gets(westLibrary[index]->title);
		fputs("페이지 수: ",stdout);
		gets(westLibrary[index]->pages);
	}

	putchar('\n');
	
	for (index = 0; index < MAX_BOOK_NUM; index++)
	{
		printf("book %d저자: %s\n제목: %s\n페이지 수: %s\n",
			index + 1, westLibrary[index]->author, westLibrary[index]->title, westLibrary[index]->pages);
	}
	for (index = 0; index < MAX_BOOK_NUM; index++)
	{
		free(westLibrary[index]);
	}
}