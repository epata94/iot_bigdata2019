#include <stdio.h>

void main(){
	int num1=10, num2=20, num3=30;
	int* arr[3]={&num1, &num2, &num3};

	printf("%p %d\n",arr[0], *arr[0]);
	printf("%p %d\n",arr[1], *arr[1]);
	printf("%p %d\n",arr[2], *arr[2]);
}
