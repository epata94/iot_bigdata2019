#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	char stringArr[100];
	int counter=0;

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s",stringArr);

	while(stringArr[counter] != '\0'){
		counter++;
	}

	printf("���ڿ��� ���̴� %d �Դϴ�.", counter);
}
