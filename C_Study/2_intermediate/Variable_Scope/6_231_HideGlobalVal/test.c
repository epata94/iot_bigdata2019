#include <stdio.h>
#pragma warning (disable:4996)
// 전역 변수의 장점
// - 언제 어디서나 쉽게 변수의 접근이 가능하다.
// 전역 변수의 단점
// - 여러 함수에서 전역변수를 사용할 경우 프로그램이 복잡해 질수 있다.

// - 일반적으로는 초보자에게 사용을 권하지 않으며
// - 경험이 많은 고급 개발자는 시스템 성능을 개선하기 위하여
// 의도적으로 전역변수를 사용하는 경우도 있다.
// - 임베디드 프로그램 작성시 간단한 프로그램은 전역변수를 사용하는 
//   경우가 많다.

int Add(int val);
int num=1;	
// 위처럼 사용하는 것 보다 아래 변수명을 일반적으로 사용한다.
// int g_num;	g_ <== global의 약자, 'g_'가 prefix

void main() {
	// 전역변수와 동일한 이름으로 변수명을 사용할 수 있지만
	// scope의 정확한 이해를 하고 사용해야 하고 그렇지 않으면
	// 사용자의 실수가 발생될 수 있기 때문에 일반적으로 는 사용하지 
	// 않는다.
	// 실무에서는 전역변수와 지역변수를 구분하기 위한 prefix(접두사)를 사용한다.
	int num = 5;
	// 지역 변수를 따로 구분하기 위해 아래와 같은 prefix를 사용하거나
	// 전역변수를 구분하기 위한 prefix를 사용할 경우 'l_'를 생략하기도 한다.
	// int l_num; 
	printf("num: %d\n", num);
	printf("num: %d\n", Add(3));
	printf("num: %d\n", num+9);
}

int Add(int val) {
	int num = 9;
	printf("num: %d\n", num);
	// Global Variable과 Local Variable이 동시에 같은 scope에 있을 경우에는
	// Global Variable은 Local Variable에 의해 접근할 수 없다.
	num += val;
	return num;
}