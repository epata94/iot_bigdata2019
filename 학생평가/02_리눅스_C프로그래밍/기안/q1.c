// ������1
#include <stdio.h>
#include <stdlib.h>
#define MAX_BOOK_NUM 3
#define A_SIZE 20
#define T_SIZE 30
#define P_SIZE 10
#pragma warning (disable:4996)

typedef struct {
	char author[A_SIZE];
	char title[T_SIZE];
	char pages[P_SIZE];
}BooksInfo;

int main() {

	BooksInfo* westLibrary[MAX_BOOK_NUM];
	int index;

	for(index=0; index<MAX_BOOK_NUM; index++){
		westLibrary[index] = malloc(sizeof(BooksInfo));
	}

	puts("���� ���� �Է�");

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		fputs("����: ", stdout);
		gets(westLibrary[index]->author);
		fputs("����: ", stdout);
		gets(westLibrary[index]->title);
		fputs("������ ��: ", stdout);
		gets(westLibrary[index]->pages);
	}
	
	putchar('\n');

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		printf("book %d\n����: %s\n����: %s\n������ ��: %s\n",
			index + 1, westLibrary[index]->author, westLibrary[index]->title, westLibrary[index]->pages);
	}
	for (index = 0; index < MAX_BOOK_NUM; index++) {
		free(westLibrary[index]);
	}
}