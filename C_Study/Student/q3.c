#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int array10[10];
	int index;
	int *ptr1=array10;
	int *ptr2= &array10[9];
	int input_number;
		
	for (index = 0; index < sizeof(array10) / sizeof(int); index++) {
		printf("ÀÔ·Â: ");
		scanf("%d", &input_number);
		if(input_number % 2 == 0){
			*ptr2= input_number;
			ptr2--;
		}else{
			*ptr1= input_number;
			ptr1++;
		}
	}
	for (index = 0; index < sizeof(array10)/ sizeof(int) ; index++) {
		printf("%d ", array10[index]);
	}
}
