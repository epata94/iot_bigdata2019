#include <stdio.h>

void main(){
	printf("/* */ <== ANSI 99 style 주석\n");
	printf("// <== ANSI89 style 주석\n");
	printf("printf(\"문자열\"); < == 기본문법\n\n");

	printf("Format string\n");
	printf("printf(\"%%[Format string]\", 값);\n");

	printf("현재온도: %d도, 오존지수:%f도, 정확도%d%%\n\n",22,0.075,99);

	printf("  순위\t     영화명\t\t변동폭\n");
	printf("    1\t어벤저스엔드게임\t  -0\n");
	printf("    2\t    캡틴마블\t\t  -0\n");
	printf("    3\t      생일\t\t  +1\n");
	printf("    4\t     미성년\t\t  -1\n");
}
