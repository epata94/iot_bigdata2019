#include <stdio.h>

void main(){
	int input_number1;
	int input_number2;
	int input_number3;
	int result;

	printf("�� ���� ������ �Է��Ͻÿ�. ex)3 4 5(Enter) : ");
	scanf("%d %d %d", &input_number1, &input_number2, &input_number3);

	result=(input_number1-input_number2)*(input_number2+input_number3)*(input_number3%input_number1);
	printf("(%d-%d)*(%d+%d)*(%d%%%d)=%d", input_number1, input_number2, input_number2, input_number3, input_number3, input_number1, result);
	
}
