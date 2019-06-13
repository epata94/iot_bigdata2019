#include <stdio.h>
#define STRING_JOB(A,B) "A의 직업은 B입니다"
#define STRING_JOB2(A,B) #A "의 직업은 "#B"입니다"

void main(){
	char * str="ABC" "DEF"; // => "ABCDEF" 로 컴파일 단계에서 결합이 된다.
	
	printf("%s\n", str);
	printf("%s\n",STRING_JOB(이동춘,나뭇꾼)); // => 전처리단계에서 치환
//	printf("%s\n","A의 직업은 B입니다"); // 패턴 적용이 되지 않은 치환
	printf("%s\n",STRING_JOB2(이동춘,나뭇꾼)); // => 전처리단계에서 치환
//	printf("%s\n","이동춘""의 직업은 ""나뭇꾼""입니다.");
}
