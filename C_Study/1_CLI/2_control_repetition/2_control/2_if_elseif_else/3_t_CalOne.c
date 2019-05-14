#include <stdio.h>

void main(){
	int opt;
	double num1, num2;
	double result;

	printf("1. 덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \n");
	printf("선택? ");
	scanf("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);

	if(opt==1)
		result = num1 + num2;
	else if(opt==2)
		result = num1 - num2;
	else if(opt==3)
		result = num1 * num2;
// else if를 사용하는 것은 향후 요구사항이 추가되어
// 새로운 연산 기능이 추가되는 것을 고려한 코딩
//	else if(opt==4)

// else만 사용하겠다는 것은 현재 기능에서 향후 추가 기능이
// 없다는 것을 암시
	else(opt==4)
		result = num1 / num2;

	printf("결과: %f \n", result);
}

