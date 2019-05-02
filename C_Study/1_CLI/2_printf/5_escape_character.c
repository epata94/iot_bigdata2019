#include <stdio.h>
// 특수문자(escape character)
// \(backslash) 다음에 excape character를 사용한다.
// 참고) /(slash)
void main(){
	// \n <= 줄바꿈
	// 제목:7+8*2=24
	printf("   <IoT. 빅데이터반 주소록>\n");

	// 전체 공간: 8+8+14=30
	printf(" 이름\t  나이\t   전화번호\n");
	                     // 14개의 공간 사용
	printf("이현구\t   28\t 010-1111-2222\a\n");
	printf("조문수\t   27\t 010-2222-3456\a\n");

	printf("------------------------------\n");
	printf("출력완료!\a\n");
	printf("/(slash) 출력\n");
	// 아래 코드는 \( <= 이런 문법이 없기 때문에
	// comple시 warning 메세지가 출력됬고
	// 실행시 해당 문자 이후의 문자열은 무시되었다.
	// 빌드 또는 실행시 발생되는 상황은
	// 컴파일러에 따라 그 때 그 때 다르다.
	//printf("\(backslash) 출력");
	printf("\\(backslash) 출력\n");

	printf("여기 숫자 있어요. 1234\n");
	printf("뒤에 있는 숫자하나를 바꿀겁니다. 1234\b5 \n");
	printf("300 을 400으로 바꿔볼게요. \r4\n");
	printf("300 을 443으로 바꿔볼게요. \r443 \n");
}
