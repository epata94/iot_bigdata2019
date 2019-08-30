// 조문수
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int compare_file(FILE* fp1, FILE* fp2)
{
	int read1;
	int read2;

	while (1)
	{
		read1 = fgetc(fp1);
		read2 = fgetc(fp2);

		if (read1 != read2)
		{
			return 0;
		}
		if (read1 == EOF && read2 == EOF)
		{
			return 1;
		}
	}

}


void main(int argc, char* argv[])
{
	FILE* fp1 = fopen(argv[1], "rt");
	FILE* fp2 = fopen(argv[2], "rt");

	if (compare_file(fp1, fp2))
	{
		printf("두 파일은 완벽히 일치합니다.");
	}
	else
	{
		printf("두 파일은 일치하지 않습니다.");
	}

	fclose(fp1);
	fclose(fp2);
}