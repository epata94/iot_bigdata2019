#include <stdio.h>
#pragma warning (disable:4996)

void main(){
	int arr[10][10]={0};
	int num=1;
	int input_number;
	int i=0, j=-1, limit, count=0;

	printf("정수를 입력하세요: ");
	scanf("%d", &input_number);

	limit=input_number;


	while(limit>=0){
		j++;
		for (count = 0; count < limit; count++) {
			*(arr[i]+j)=num;
			num++;
			j++;
		}
		j--;
		limit--;
		i++;
		for(count=0; count<limit; count++){
			(*(arr+i))[j]=num;
			num++;
			i++;
		}
		i--;
		j--;
		for (count = 0; count < limit; count++) {
			*(arr[i]+j)=num;
			num++;
			j--;
		}
		j++;
		limit--;
		i--;
		for (count = 0; count < limit; count++) {
			(*(arr+i))[j]=num;
			num++;
			i--;
		}
		i++;

	}

	//최종 출력
	for(i=0; i<input_number; i++){
		for(j=0; j<input_number; j++){
			printf("%3d ", arr[i][j]);
		}
		printf("\n");

	}
}
