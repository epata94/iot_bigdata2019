#include <stdio.h>
#pragma warning (disable:4996)
// 아래와 같이 전역 Global Scope에서 struct 타입을 정의함과 동시에 변수를 선언하는 
// 문법은 가능은 하나 변수 선언과 동시에 해당 변수는 전역변수가 되기 때문에
// 구조화 된 프로그램을 작성하는 원칙에 위배가 될 수 있으므로 일반적이지 않다.
struct point {
	int xpos;
	int ypos;
	char name[20];
}pos1, pos2, pos3;

void my_func() {

}

void main() {
	// 구조체를 아래와 같이 함수 내부에 정의 하는 것은 가능하다.
	// 하지만 일반적이지 않다.
	// 왜냐하면 해당 타입을 오로지 정의한 함수내부에서만 사용하겠다는 의도이기 때문이다.
	// 따라서 해당 타입은 다른 함수에서는 사용할 수 없다.
	struct point {
		int xpos;
		int ypos;
	};
	// struct 타입의 변수도 함수 내부에서 정의할 수 있다.
	// 다만 외부의 동일한 이름이 있을 경우에는 지역변수와 동일하게 전역변수명을
	// 가리게 된다.
	struct point pos1;
	pos1.xpos = 1;
	pos2.ypos = 2;

	printf("End\n");
}
