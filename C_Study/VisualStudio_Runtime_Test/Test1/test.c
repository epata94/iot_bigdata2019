#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	int s;
	char* ptr1;
	int index;

	printf("�Է��� ���ڿ��� �ִ����: ");
	scanf("%d", &s);
	while (getchar() != '\n');

	ptr1 = (char*)malloc(sizeof(char) * s);

	fputs("���ڿ��Է�: ", stdout);
//	fgets(ptr1, sizeof(ptr1), stdin);
	fgets(ptr1, s, stdin);

	printf("%d", strlen(ptr1));

}