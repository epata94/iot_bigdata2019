// 배원제
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
#define MAX_NUM 3
#define A_NUM 30
#define T_NUM 20
#define P_NUM 10

typedef struct {
	char author[A_NUM];
	char title[T_NUM];
	char page[P_NUM];
} BOOKSINFO;

int main() {
	BOOKSINFO* westLibrary[MAX_NUM];
	int index;

	puts("도서 정보 입력");
	for (index = 0; index < MAX_NUM; index++) {
		westLibrary[index] = malloc(sizeof(BOOKSINFO));
		
		fputs("저자: ", stdout);
		gets(westLibrary[index]->author);
		fputs("제목: ", stdout);
		gets(westLibrary[index]->title);
		fputs("페이지 수: ", stdout);
		gets(westLibrary[index]->page);
	}
	puts("\n도서 정보 출력");
	for (index = 0; index < MAX_NUM; index++) {
		printf("저자: %s\n", westLibrary[index]->author);
		printf("제목: %s\n", westLibrary[index]->title);
		printf("페이지 수: %s\n", westLibrary[index]->page);
	}
	for (index = 0; index < MAX_NUM; index++) {
		free(westLibrary[index]);
	}
}