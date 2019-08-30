//�����
#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
#define MAX_BOOK_NUM 3
#define AUTHOR_SIZE 20
#define TITLE_SIZE 30
#define PAGE_SIZE 10

typedef struct {
	char bookAuthor[AUTHOR_SIZE];
	char bookTitle[TITLE_SIZE];
	char bookPage[PAGE_SIZE];
}BooksInfo;

void main() {

	int index;
	BooksInfo* EastLibrary[MAX_BOOK_NUM];

	system("chcp 949");

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		EastLibrary[index] = malloc(sizeof(BooksInfo));
	}

	puts("**���� ���� �Է�**\n");

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		fputs("���� : ", stdout);
		gets(EastLibrary[index]->bookAuthor);
		fputs("���� : ", stdout);
		gets(EastLibrary[index]->bookTitle);
		fputs("������ �� : ", stdout);
		gets(EastLibrary[index]->bookPage);
	}

	putchar('\n');

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		printf("[Book %d]\n����: %s\n����: %s\n��������: %s\n\n"
			, index + 1, EastLibrary[index]->bookAuthor
			, EastLibrary[index]->bookTitle, EastLibrary[index]->bookPage);
	}

	for (index = 0; index < MAX_BOOK_NUM; index++) {
		free(EastLibrary[index]);
	}
}