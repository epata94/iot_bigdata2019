// 장성민
#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)
#define MAX_BOOK_NUMBER 3
#define A_SIZE 20
#define T_SIZE 30
#define P_SIZE 10

typedef struct {
	char author[A_SIZE];
	char title[T_SIZE];
	char pages[P_SIZE];
} BooksInfo;

void main() {
	BooksInfo* library[MAX_BOOK_NUMBER];
	int index;

	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		library[index] = malloc(sizeof(BooksInfo));
	}
	puts("도서 정보 입력");
	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		fputs("저자: ", stdout);
		gets(library[index]->author);
		fputs("제목: ", stdout);
		gets(library[index]->title);
		fputs("페이지 수: ", stdout);
		gets(library[index]->pages);
	}
	putchar('\n');

	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		printf("Book %d \n", index + 1);
		printf("저자: %s \n", library[index]->author);
		printf("제목: %s \n", library[index]->title);
		printf("페이지 수: %s \n", library[index]->pages);
	}
	
	for (index = 0; index < MAX_BOOK_NUMBER; index++) {
		free(library[index]);
	}
}