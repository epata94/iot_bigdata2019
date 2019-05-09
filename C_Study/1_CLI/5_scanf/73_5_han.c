#include <stdio.h>

void main(){

	int num1;
	int num2;
	int num3;
	int result1, result2, result3;
	
	result1 = num1-num2;
	result2 = num2+num3;
	result3 = num3%num1;

	printf("세 수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	

	printf("(%d-%d)*(%d+%d)*(%d%%%d)  = %d\n", num1, num2, num2, num3, num3, num1,result1*result2*result3);

}
