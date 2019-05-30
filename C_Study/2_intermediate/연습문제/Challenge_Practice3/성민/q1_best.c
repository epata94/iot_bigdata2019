#include <stdio.h>
void SaveArr(int (*arr)[4], int size, int (*copy_arr)[4]){
	int i, j, k, q;

	for (j=0, k=0; j<size; j++, k++){
		for (i=3, q=0; i>=0; i--, q++){
			copy_arr[k][q]=arr[i][j];
		}
	}
}

void PrintArr(int (*arr)[4], int size){
	int i, j;
	for (i=0; i<size; i++){
		for (j=0; j<size; j++){
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void main(){
	int arr[4][4]={
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int arr1[4][4];
	int arr2[4][4];
	int arr3[4][4];

	SaveArr(arr, sizeof(arr)/sizeof(arr[0]), arr1);
	SaveArr(arr1, sizeof(arr)/sizeof(arr[0]), arr2);
	SaveArr(arr2, sizeof(arr)/sizeof(arr[0]), arr3);

	PrintArr(arr, sizeof(arr)/sizeof(arr[0]));
	PrintArr(arr1, sizeof(arr1)/sizeof(arr1[0]));
	PrintArr(arr2, sizeof(arr2)/sizeof(arr2[0]));
	PrintArr(arr3, sizeof(arr3)/sizeof(arr3[0]));

}



///다르게 출력

/*
	for (j=3; j>=0; j--){
		for (i=3; i>=0; i--){
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

<출력화면>
  16   12    8    4
  15   11    7    3
  14   10    6    2
  13    9    5    1
*/

/*
	for (i=0; i<4; i++){
		for (j=3; j>=0; j--){
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

<출력화면>
   4    3    2    1
   8    7    6    5
  12   11   10    9
  16   15   14   13

  */

