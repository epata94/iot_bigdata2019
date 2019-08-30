// 한상우
#include <stdio.h>
#pragma warning (disable:4996)

int compare_file(FILE* fFILE1, FILE* fFILE2) {
	int file1_read_char;
	int file2_read_char;

	while (1) {
		file1_read_char = fgetc(fFILE1);
		file2_read_char = fgetc(fFILE2);

		if (file1_read_char != file2_read_char) {
			return 0;
		}
		if (file1_read_char == EOF && file2_read_char) {
			return 1;
		}
	}
}

void main(int argc, char* argv[]) {
	FILE* fFILE1 = fopen(argv[1], "rt");
	FILE* fFILE2 = fopen(argv[2], "rt");

	if (compare_file(fFILE1, fFILE2)) {
		fputs("두 파일은 완전히 일치 합니다.", stdout);
	}
	else {
		fputs("두 파일은 일치하지 않습니다.", stdout);
	}
	fclose(fFILE1);
	fclose(fFILE2);
}