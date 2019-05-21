#include <stdio.h>
#pragma warning (disable:4996)

void main() {

	char stringArr[100];
	char maxAscii=0;
	int counter=0;

	printf("문자열을 입력하세요: ");
	scanf("%s",stringArr);

	while(stringArr[counter] != '\0'){
		if(maxAscii<stringArr[counter]){
			maxAscii=stringArr[counter];
		}
		counter = counter + 1;
	}

	printf("이 문자열에서 가장 큰 아스키 코드 값을 가지는 문자는 %c(%d)입니다.", maxAscii, maxAscii);
}
