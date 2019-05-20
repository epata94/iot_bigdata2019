#include <stdio.h>

void main(){
	int altitude=0;

	printf("현재 고도 %dm\n", altitude);
	
	altitude = altitude+1;
	printf("현재 고도 %dm\n", altitude);
	
	altitude += 1;
	printf("현재 고도 %dm\n", altitude);

	// 자기 자신의 값을 변경했기 때문에 
	// 변경된 값을 또 자신에게 할당할 필요가 없다.
	altitude = ++altitude;
	printf("현재 고도 %dm\n", altitude);

	// ++는 증가(increment) 연산자
	// 사용법: ++변수 또는 변수--
	// ++altitude 가 의미하는 것은 
	// altitude = altitude+1을 의미한다.
	++altitude;
	printf("현재 고도 %dm\n", altitude);
	
	// 선행 연산
	// 값을 1 증가 후, 속한 문장의 나머지를 진행
	// 선증가 후처리
	printf("현재 고도 %dm\n", ++altitude);

	// 후행 연산
	// 속한 문장을 먼저 진행한 후 값을 1증가
	// 선처리 후증가
	printf("현재 고도 %dm\n", altitude++);
	printf("현재 고도 %dm\n", altitude);
	
	altitude++;
	printf("현재 고도 %dm\n", altitude);

	// 이러한 패턴은 감소 연산자에도 동일하게 적용된다.
	// 사용법: --변수 또는 변수--
	// --altitude가 의미하는 것은
	// altitude = altitude-1;
}
