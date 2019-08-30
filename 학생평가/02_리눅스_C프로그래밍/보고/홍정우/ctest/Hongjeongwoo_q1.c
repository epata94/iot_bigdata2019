// ???
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#define MAX_BOOKS_NUMBER 3

typedef struct {
	char person[20];
	char title[30];
	char pages[10];
}Books_info;

void main() {
	int index;
	Library[] = malloc(sizeof(Books_info) * MAX_BOOKS_NUMBER);

	for (index = 0; index < MAX_BOOKS_NUMBER; index++) {
		puts("历磊 : ");
		gets("%s",Library[index]->person);
		puts("力格 : ");
		gets("%s",Library[index]->title);
		puts("其捞瘤 荐 : ");
		gets("%s", Library[index]->pages);
	}
	for (index = 0; index < MAX_BOOKS_NUMBER; index++) {
		printf("\n历磊 : %s\n力格 : %s\n其捞瘤 荐 : %s\n",
			Library[index]->person,Library[index]->title,Library[index]->pages);
	}
	for (index = 0; index < MAX_BOOKS_NUMBER; index++) {
		free(Library[index]);
	}
}