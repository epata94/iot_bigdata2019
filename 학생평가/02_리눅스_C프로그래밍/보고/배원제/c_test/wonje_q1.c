// �����
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

	puts("���� ���� �Է�");
	for (index = 0; index < MAX_NUM; index++) {
		westLibrary[index] = malloc(sizeof(BOOKSINFO));
		
		fputs("����: ", stdout);
		gets(westLibrary[index]->author);
		fputs("����: ", stdout);
		gets(westLibrary[index]->title);
		fputs("������ ��: ", stdout);
		gets(westLibrary[index]->page);
	}
	puts("\n���� ���� ���");
	for (index = 0; index < MAX_NUM; index++) {
		printf("����: %s\n", westLibrary[index]->author);
		printf("����: %s\n", westLibrary[index]->title);
		printf("������ ��: %s\n", westLibrary[index]->page);
	}
	for (index = 0; index < MAX_NUM; index++) {
		free(westLibrary[index]);
	}
}