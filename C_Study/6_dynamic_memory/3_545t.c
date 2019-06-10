#include <stdio.h>
#include <stdlib.h>

void main() {
	int num1;
	int* ptr1 = &num1;
	void* ptr2 = malloc(sizeof(int));
	int* ptr3 = (int *)malloc(sizeof(int));

	*ptr1 = 10;

	printf("*ptr1=%d\n", *ptr1);

	// void형에 int 값을 할당하려고 했기때문에 에러 발생
	//*ptr2 = 10;
	*ptr3 = 10;
	printf("*ptr3=%d\n", *ptr3);
}
