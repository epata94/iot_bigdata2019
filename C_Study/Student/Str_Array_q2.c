#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	char stringArr[100];
	char tempStr;
	int index=0;
	int swapIndex;
	int length=0;

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s",stringArr);

	while(stringArr[index] != '\0'){
		index = index+1;
	}

	length = index;
//	swapIndex = length-1;	
	
	for(index=0; index<length/2; index++){
//		tempStr = stringArr[swapIndex];
		tempStr = stringArr[length-index-1];
		stringArr[length-index-1] = stringArr[index];
		stringArr[index] = tempStr;
//		swapIndex--;
	}
	printf("������ ���ڿ��� %s �Դϴ�",stringArr);

}
