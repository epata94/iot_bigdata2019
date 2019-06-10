#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	// w모드는 파일이 없을 경우에는 새로 생성을 하고
	// 기존에 파일이 있는 경우에는 해당파일의 내용을 모두
	// 초기화한 상태에서 새로 작성한 내용을 overwrite한다.
	FILE* fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈 실패!");
	}
	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
//	if (fclose(fp)) {
	if (fclose(fp) == EOF) {
		puts("파일 close 실패!");
	}

}
