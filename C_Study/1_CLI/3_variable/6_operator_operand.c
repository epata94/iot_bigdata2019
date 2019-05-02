#include <stdio.h> 	// standard io
					// IO: Input/Output
void main(){
		int result=0;
		int second_result=0;
		int input_number1=8;
		int input_number2=2;

		printf("%d+%d=%d\n",input_number1,input_number2,input_number1+input_number2);

		// 변수에 상수값을 할당
		input_number1=3;
		input_number2=4;

		// 변수에 Expression(수식)이 할당
		result = input_number1+input_number2;
		printf("%d+%d=%d\n",input_number1,input_number2,result);

		// 변수에 변수값을 할당	
		second_result = result;	
}
