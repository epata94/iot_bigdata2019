#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	char stringArr[100];
	int counter=0;

	printf("문자열을 입력하세요: ");
	scanf("%s",stringArr);

	while(stringArr[counter] != '\0'){
		counter++;
	}

	printf("문자열의 길이는 %d 입니다.", counter);
}
