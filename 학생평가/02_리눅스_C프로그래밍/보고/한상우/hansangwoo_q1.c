// 한상우
// 과제1]도서 관리용 프로그램
#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
#define MAX_BOOK_NUM 3
#define A_SIZE 30
#define T_SIZE 30
#define P_SIZE 10

typedef struct {
	char author[A_SIZE];
	char title[T_SIZE];
	char pages[P_SIZE];
}BooksInfo;

void main(void) {
	BooksInfo* westLibrary[MAX_BOOK_NUM];
	int index;

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		westLibrary[index] = malloc(sizeof(BooksInfo));
	}

	puts("도서 정보 입력");
	for (index = 0; index < MAX_BOOK_NUM; index++) {
		fputs("저자: ", stdout);
		gets(westLibrary[index]->author);
		fputs("제목: ", stdout);
		gets(westLibrary[index]->title);
		fputs("페이지 수: ", stdout);
		gets(westLibrary[index]->pages);
	}

	putchar('\n');
	for (index = 0; index < MAX_BOOK_NUM; index++) {
		printf("BOOK _ %2d\n저자: %s\n제목: %s\n페이지 수: %s\n",
			index + 1, westLibrary[index]->author, westLibrary[index]->title, westLibrary[index]->pages);
	}
	for (index = 0; index < MAX_BOOK_NUM; index++) {
		free(westLibrary[index]);
	}
}