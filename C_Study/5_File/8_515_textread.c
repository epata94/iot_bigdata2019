#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char str[30];
	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일 오픈 실패");
		return;
	}

	printf("%c", fgetc(fp));
	printf("%c", fgetc(fp));

	printf("%s",fgets(str, sizeof(str), fp));
	printf("%s",fgets(str, sizeof(str), fp));
	fclose(fp);
}
