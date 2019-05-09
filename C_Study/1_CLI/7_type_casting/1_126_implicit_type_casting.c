#include <stdio.h>
// 자동 형변환
// 자동 형변환을 Implicit(암시적) Type Casting 이라고 한다.
void main(){
	// 정수를 실수형으로 변환하는 경우
	// 데이터 손실은 이러나지 않는다. 다만, 실수의 표현이기 때문에 오차는 
	// 존재할 수 있다.
	double num1=245;
	// 실수를 정수형으로 변환하는 경우
	// 정수는 소수점 이하의 숫자를 표현하지 못하기 때문에 소수점 이하는 
	// 버려진다. 즉, 데이터의 손실을 감수해야 한다.
	int num2=3.1415;
	// 19는 5.15 실수 값과 + 연산을 위해 실수형으로 자동형변환이 일어난다.
	// C언어에서의 연산은 기본적으로 같은 타입인 경우에만 진행된다.
	// 연산을 위한 피연산자의 형변환은 표현식에서 가장 큰 타입에 맞추어
	// 아래 타입의 순서대로 일어난다.
	// char->short->int->long->long long->float->double->long double
	double num3 = 5.15+19;
	
	printf("정수 245를 실수로: %f \n", num1);
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("num3: %f\n", num3);
	
}
