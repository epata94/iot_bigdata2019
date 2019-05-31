#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

void main() {
	char str1[30] = "First~";
	char str2[30] = "Second";
	char str3[10] = "First~";
	char str4[10] = "Second";
	
	//strcat(str1, str2);
	//printf("%s", str1);
	//strcat(str1, str2) 의 return 값은 str1
	//printf("%s", strcat(str1, str2));
	// strcat를 할 경우에는 원본 문자열의 크기가 붙여넣을려는 문자열을
	// 수용할 수 있는 사이즈여야 한다.
	// 그렇지 않다면 원본 문자열 배열의 크기를 넘어서기 때문에 
	// 런타임 에러를 발생한다.
	strcat(str3, str4);
	printf("%s", str3);
}
