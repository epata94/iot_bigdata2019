#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int ch, i;
//	FILE* fp = fopen("data.txt", "rt");
	FILE* fp = fopen("no_file.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
		return;
	}

	for (i = 0; i < 3; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	if (fclose(fp) == EOF) {
		puts("파일 close 실패!");
	}

}
