#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	char stringArr[100];
	char maxAscii=0;
	int counter=0;

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s",stringArr);

	while(stringArr[counter] != '\0'){
		if(maxAscii<stringArr[counter]){
			maxAscii=stringArr[counter];
		}
		counter = counter + 1;
	}

	printf("�� ���ڿ����� ���� ū �ƽ�Ű �ڵ� ���� ������ ���ڴ� %c(%d)�Դϴ�.", maxAscii, maxAscii);
}
