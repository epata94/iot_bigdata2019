// 김원상
#include <stdio.h>
#pragma warning (disable:4996)

int compareTwoText(FILE* filePtr1, FILE* filePtr2) {

	int textchar1;
	int textchar2;

	while (1) {

		textchar1 = fgetc(filePtr1);
		textchar2 = fgetc(filePtr2);

		if (textchar1 != textchar2) {
			return 0;
		}
		
		if(textchar1 == EOF && textchar2 == EOF){
			return 1;
		}
	}
}

void main(int argc, char* argv[]) {

	FILE* FirstText = fopen(argv[1], "rt");
	FILE* SecondText = fopen(argv[2], "rt");

	system("chcp 949");

	if (compareTwoText(FirstText, SecondText)) {
		fputs("두 파일이 완전히 일치합니다.", stdout);
	}
	else {
		fputs("두 파일이 일치하지 않습니다.", stdout);
	}

	fclose(FirstText);
	fclose(SecondText);

}