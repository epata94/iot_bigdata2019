// 김혜경
#include<stdio.h>
#include<stdlib.h>
#define MAX_BOOK_NUM 3
#define A_SIZE 20
#define T_SIZE 30
#define P_SIZE 10
#pragma warning(disable:4996)

typedef struct {
	
	char author[A_SIZE];
	char title[T_SIZE];
	char pages[P_SIZE];
}BooksINfo;

int main() {
	
	BooksINfo* Library[MAX_BOOK_NUM];
	int index;

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		Library[index] = malloc(sizeof(BooksINfo));
	}

	puts("도서 정보 입력");
	for (index = 0; index < MAX_BOOK_NUM; index++) {
		fputs("저자: ", stdout);
		gets(Library[index]->author);
		fputs("제목: ", stdout);
		gets(Library[index]->title);
		fputs("페이지 수: ", stdout);
		gets(Library[index]->pages);
	}
	putchar('\n');

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		printf("Book %d\n저자: %s\n제목: %s\n페이지 수: %s\n",
			index + 1, Library[index]->author, Library[index]->title, Library[index]->pages);
	}

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		free(Library[index]);
	}
}