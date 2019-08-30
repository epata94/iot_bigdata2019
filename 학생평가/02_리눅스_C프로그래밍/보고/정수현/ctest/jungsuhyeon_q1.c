// 정수현
#include <stdio.h>	
#include <stdlib.h>
#define MAX_BOOK_N 3
#define A_TEXT 20
#define T_TEXT 30
#define P_TEXT 10
#pragma warning (disable:4996)

typedef struct {
	char author[A_TEXT];
	char title[T_TEXT];
	char pages[P_TEXT];
}Booksinfo;

int main() {
	Booksinfo* library[MAX_BOOK_N];
	int index;

	for ( index = 0; index < MAX_BOOK_N ; index++)
	{
		library[index] = malloc(sizeof(Booksinfo));
	}
	
	puts("화면 출력");
	for ( index = 0; index < MAX_BOOK_N; index++)
	{
		fputs("저자: ", stdout);
		gets(library[index]->author);
		fputs("제목: ", stdout);
		gets(library[index]->title);
		fputs("페이지 수: ", stdout);
		gets(library[index]->pages);
	}
	putchar('\n');

	for ( index = 0; index < MAX_BOOK_N; index++)
	{
		printf("book %d\n저자:%s\n제목:%s\n페이지 수:%s\n",
			index + 1, library[index]->author, library[index]->title, library[index]->pages);
	}

	for ( index = 0; index < MAX_BOOK_N; index++)
	{
		free(library[index]);
	}

}
