// ������
#include <stdio.h>
#pragma warning (disable:4996)

int Compare_file(FILE* file1, FILE* file2) {
	int file1_read;
	int file2_read;

	while (1)
	{
		file1_read = fgetc(file1);
		file2_read = fgetc(file2);
		if (file1_read != file2_read) {
			return 0;
		}
		if (file1_read == EOF && file2_read == EOF)
		{
			return 1;
		}
	}
}

void main(int argc, char* argv[]) {
	FILE* file1 = fopen(argv[1], "rt");
	FILE* file2 = fopen(argv[2], "rt");

	if (Compare_file(file1,file2))
	{
		printf("�� ������ ������ ��ġ�մϴ�.");
	}
	else {
		fputs("�� ������ ��ġ���� �ʽ��ϴ�.", stdout);
	}
	fclose(file1);
	fclose(file2);
}