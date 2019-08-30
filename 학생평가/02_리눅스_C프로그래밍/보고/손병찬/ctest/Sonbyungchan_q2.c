// 손병찬
#include <stdio.h>
#pragma warning (disable:4996)

int compare_file(FILE* fFILE1, FILE* fFILE2);
int compare_file(FILE* fFILE1, FILE* fFILE2) {
	int read_char_fFILE1;
	int read_char_fFILE2;

	while (1) {
		read_char_fFILE1 = fgetc(fFILE1);
		read_char_fFILE2 = fgetc(fFILE2);

		if (read_char_fFILE1 != read_char_fFILE2) {
			return 0;
		}
		if (read_char_fFILE1 == EOF && read_char_fFILE2 == EOF) {
			return 1;
		}
	}
}

void main(int argc, char* argv[]) {
	FILE* ffile1 = fopen(argv[1], "rt");
	FILE* ffile2 = fopen(argv[2], "rt");

	if (compare_file(ffile1, ffile2)) {
		puts("두 파일이 일치합니다");
	}
	else {
		puts("두 파일이 일치하지 않습니다");
	}
	fclose(ffile1);
	fclose(ffile2);
}
