// ����ȣ
#include <stdio.h>
#pragma error(disable: 4996)

int compare_file(FILE* ffile1, FILE* ffile2) {
	int first_file;
	int second_file;

	while (1) {
		first_file = fgetc(ffile1);
		second_file = fgetc(ffile2);

		if (first_file != second_file) {
			return 0;
		}
		if (first_file == EOF && second_file == EOF)
			return 1;
	}
}
void main(int argc, char* argv[]) {
	FILE* ffile1 = fopen(argv[1],"rt");
	FILE* ffile2 = fopen(argv[2], "rt");

	if (compare_file(ffile1, ffile2)) {
		fputs("�� ������ ������ ��ġ�մϴ�.",stdout);
	}
	else {
		fputs("�� ������ ��ġ���� �ʽ��ϴ�.", stdout);
	}
	fclose(ffile1);
	fclose(ffile2);
}
