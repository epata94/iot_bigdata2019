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
		printf("%d��° ������ �Է��Ͻʽÿ�: ", index+1);
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
	printf("�Է¹��� ���� �迭�� �ִ�: %d\n", max);
	printf("�Է¹��� ���� �迭�� �ּҰ�: %d\n", min);
	printf("�Է¹��� ���� �迭�� ����: %d\n", total);
}
