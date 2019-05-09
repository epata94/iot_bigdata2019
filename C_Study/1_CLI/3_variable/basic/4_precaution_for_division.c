#include <stdio.h>

void main(){
	int numerator=2;
	int denominator=1;

	float float_numerator=23;
	float float_denominator=47;
//	int num1; <= 변수명으로써 가독성(readibility)가 떨어진다.
//	int num2;
	// 나눗셈의 결과가 정수형으로 출력된다.
	printf("%d/%d=%d\n",numerator,denominator, numerator/denominator);

	// 한 번 선언한 변수의 값을 변경할 때에는 변수명 앞에 
	// 타입을 지정할 필요가 없다.
	numerator = 1;
	denominator = 2;
	// %d 인경우 visual studion C 컴파일러는 소수점 이하를 무시한다.
	printf("%d/%d=%d\n",numerator,denominator, numerator/denominator);

	// 아래 코드는 %f이지만 나눗셈 결과가 정수이기 때문에 compile시 아래 
	// warning 메세지를 출력한다.
	// 출력은 실수로 출력되지만 정수연산을 한 결과와 동일하다.
	// warning C4477: 'printf' : 서식 문자열 '%f'에 'double' 형식의 인수가 필요하지만 variadic 인수 3의 형식이 'int'입니다.	
	//printf("%d/%d=%f\n",numerator,denominator, numerator/denominator);

	// 정수 연산 결과를 float로 타입캐스팅(type casting) 시도
	// 컴파일러에 따라 warning, compile error 또는 runtime error를 피할 수
	// 있으나 정수형 결과를 단순히 변환했으므로 손실되는 값이 존재한다.
	printf("%d/%d=%f\n",numerator,denominator, (float)(numerator/denominator));

	// 분자, 분모의 값을 float로 형변환했기 때문에 연산의 결과도 float이다.
	// 따라서 손실되는 값은 없다.	
	printf("%d/%d=%f\n",numerator,denominator, (float)numerator/(float)denominator);

	// 분자, 분모 모두 float형 변수를 사용했기 때문에 형변환도 필요없고
	// 손실되는 값도 없다.
	printf("%f/%f=%f\n",float_numerator,float_denominator, float_numerator/float_denominator);

}

