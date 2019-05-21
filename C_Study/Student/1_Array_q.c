#include <stdio.h>
void main() {
	int numbers[5];
	int index = 0;
	int max;
	int min;
	int total = 0;
	int length;

	length = sizeof(numbers)/sizeof(int);

	for(;index<length;index++){
		printf("%d번째 정수를 입력하십시오: ", index+1);
		scanf("%d",&numbers[index]);
		total = total + numbers[index];
	}
	
	max = numbers[0];
	min = numbers[0];
	
	for(index=0;index<length;index++){
		if(max<numbers[index]){
			max = numbers[index];
		}
		if(min>numbers[index]){
			min = numbers[index];
		}
	}
	putchar('\n');
	printf("입력받은 정수 배열의 최댓값: %d\n", max);
	printf("입력받은 정수 배열의 최소값: %d\n", min);
	printf("입력받은 정수 배열의 총합: %d\n", total);
}
