#include <stdio.h>

void main(){

	// num1, num2를 변수(variable)라고 한다.
	// 변수는 값이 바뀔수 있는 수를 의미한다.
	int num1 = 2;
	int num2 = 1;

    printf("첫 번째 입력: %d, 두 번째 입력: %d에 대한 사칙연산\n", num1, num2);
    printf("%d+%d=%d\n",num1,num2,num1+num2);
    printf("%d-%d=%d\n",num1,num2,num1-num2);
    printf("%d*%d=%d\n",num1,num2,num1*num2);
    printf("%d/%d=%d\n",num1,num2,num1/num2);
   
    num1 = 4;
	num2 = 2;	
	printf("첫 번째 입력: %d, 두 번째 입력: %d에 대한 사칙연산\n", num1, num2);
    printf("%d+%d=%d\n",num1,num2,num1+num2);
    printf("%d-%d=%d\n",num1,num2,num1-num2);
    printf("%d*%d=%d\n",num1,num2,num1*num2);
    printf("%d/%d=%d\n",num1,num2,num1/num2);
    
	num1 = 12;
	num2 = 4;	
	printf("첫 번째 입력: %d, 두 번째 입력: %d에 대한 사칙연산\n", num1, num2);
    printf("%d+%d=%d\n",num1,num2,num1+num2);
    printf("%d-%d=%d\n",num1,num2,num1-num2);
    printf("%d*%d=%d\n",num1,num2,num1*num2);
    printf("%d/%d=%d\n",num1,num2,num1/num2);
}
