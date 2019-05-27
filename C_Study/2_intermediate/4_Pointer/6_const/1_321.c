#include <stdio.h>

void main(){
	int num=20;
	int num2=30;
	const int* ptr=&num;
	num=40;
	ptr=&num2; 	// ptr의 주소값 변경은 가능
	*ptr=30; 	// ptr 주소값이 가리키는 값을 변경하는 것은 불가능
}
