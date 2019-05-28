#include <stdio.h>

void main(){
	int arr2d[3][3];
	int iarr[3];
	double darr[3];

	printf("%p \n", arr2d);
	printf("%p \n", arr2d[0]);
	printf("%p \n\n", &arr2d[0][0]);

	printf("%p \n", arr2d[1]);
	printf("%p \n\n", &arr2d[1][0]);

	printf("%p \n", arr2d[2]);
	printf("%p \n\n", &arr2d[2][0]);

	printf("sizeof(arr2d): %d\n", sizeof(arr2d));
	printf("sizeof(arr2d[0]): %d\n", sizeof(arr2d[0]));
	printf("sizeof(arr2d[1]): %d\n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]): %d\n", sizeof(arr2d[2]));

	printf("\n%p %p \n",iarr, iarr+1);
	printf("\n%p %p\n",darr, darr+1);

}
