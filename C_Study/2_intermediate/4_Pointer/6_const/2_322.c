#include <stdio.h>

void main(){
	int num1=20;
	int num2=30;
	int* const ptr=&num1;
	const int* const ptr2 = &num1;
	*ptr=40;		// ptr 주소에서 가리키는 값 변경 가능 	
	ptr=&num2; 		// ptr 주소 변경 불가능

	*ptr2=40;
	ptr2=&num2;
}
