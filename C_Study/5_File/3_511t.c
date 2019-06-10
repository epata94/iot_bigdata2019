#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	// a모드는 파일이 없을 경우에는 새로 생성을 하고
	// 기존에 파일이 있는 경우에는 파일의 끝에 덧붙여 쓰기를 한다.
	FILE* fp = fopen("data2.txt", "at");
	if (fp == NULL) {
		puts("파일오픈 실패!");
	}
	fputc('D', fp);
	fputc('E', fp);
	fputc('F', fp);
//	if (fclose(fp)) {
	if (fclose(fp) == EOF) {
		puts("파일 close 실패!");
	}

}
