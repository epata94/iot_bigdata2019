#include <stdio.h>
#pragma warning (disable:4996)

void main() { // 함수 정의부
	// local variable 변수 선언부 (선언 또는 선언, 초기화를 같이 한다.)
	// local variable 변수 선언부에만 변수를 선언하는 것은
	// ANSI-89 Style이다
//	int cnt;
	int var1;
	// 아래와 같이 같은 scope에서 동일한 변수명을 사용할 수 없다.
	//int var1;


	for (int cnt = 0; cnt < 3; cnt++) {
		// 함수 안에 {} 안에 선언된 변수는 {}안에서만 접근이 가능하다.
		// local variable 변수 선언부 이외에 중간에서 변수를 자유롭게
		// 선언하는 것은 ANSI-99 Style이다.
		// ANSI-99 Style로 변수를 선언하는 것을 추천하지 않는다.
		// 유지보수성, 그리고 개발자의 실수를 유도한다.
		int num = 0;
		num++;
		printf("%d번째 반복, 지역변수 num은 %d\n", cnt + 1, num);
	}

	// {} Scope상 num은 접근 할 수 없는 변수 이기 때문에 
	// 아래 코드는 컴파일 에러를 발생한다.
	//printf("최종 num은 %d\n", num);
	//cnt도 for문 안의 {} scope에 해당한다.
	//printf("최종 cnt는 %d\n", cnt);

	// 이러한 {} Scope는 {}사용하는 모든 명령문에 동일하게 적용된다.
	// 아래 cnt는 main함수의 최상위 {} scope를 가진다.
	// 반면 위에 cnt는 main함수 밑에 for문 {}의 scope를 가진다.
	int cnt=0;

	while (1) {
		// 위 for문의 num과 다른 scope이기 때문에 동일한 이름으로
		// 변수선언 가능하다.
		int num = 0;
		// 하위 {} scope에서 상위 scope에 있는 변수는 접근 가능
		cnt++, num++;
		if (cnt > 3) {
			break;
		}
	}
	// 위에 cnt는 같은 Scope이고 하위 scope에서 상위 scope의 변수
	// 접근한 결과는 유효하다.
	printf("최종 cnt: %d\n", cnt);
	// num은 while내부의 scope이기 때문에 접근 불가능
	//printf("최종 num은 %d\n", num);
	
}