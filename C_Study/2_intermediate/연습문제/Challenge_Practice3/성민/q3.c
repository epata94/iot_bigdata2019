#include <stdio.h>
#include <stdlib.h>

void main(){
	int i;
	int limit=100;

	printf("������ ����: 0���� %d���� \n", limit-1);
	for(i=0; i<5; i++){
		printf("���� ���: %d \n", rand()%limit);
	}
}
