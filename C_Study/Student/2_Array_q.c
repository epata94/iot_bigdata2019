#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	//char string[10] = "Good time";
	char string[] = "Good time";
	//int length = sizeof(string);
	int index=0;

	while(string[index]!='\0'){
		printf("%c",string[i++]);
	}

//	for(int i=0; i<length; i++){
//		printf("%c",string[i]);
//	}
}
