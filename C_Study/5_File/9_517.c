#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;

	if (src == NULL || des == NULL) {
		puts("Error!");
		return;
	}

	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);

	if (feof(src) != 0)
		puts("파일복사 완료!");
	else
		puts("파일복사 실패!");

	fclose(src);
	fclose(des);

}
