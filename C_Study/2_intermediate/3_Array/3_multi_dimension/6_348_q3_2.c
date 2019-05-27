#include <stdio.h>
#pragma warning (disable:4996)
int record[5][5];
char* subject[] = {"국어","영어","수학","국사"};
char* student[] = { "철희","철수","영희","영수" };


void WriteRecord(void) {
	int sum;
	int i, j;

	for (i = 0; i < 4; i++){
		sum = 0;
		printf("%s 학생의 성적 입력\n", student[i]);
		for (j = 0; j < 4; j++) {
			printf("과목 %s: ", subject[j]);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}
void WriteSumRecord(void) {
	int sum = 0;
	int i, j;

	for (i = 0; i < 4; i++) {
		sum = 0;
		for (j = 0; j < 4; j++)
			sum += record[j][i];
		record[4][i] = sum;
		record[4][4] += sum;
	}
}

void ShowAllRecord() {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%3d ", record[i][j]);
		printf("\n");
	}
}

void main() {
	
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
}
