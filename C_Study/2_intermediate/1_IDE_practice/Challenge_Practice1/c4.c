#include <stdio.h>
#pragma warning (disable:4996)
int main(void) { 
	int cash, pain = 500, shrimp = 700, coke = 400; 
	int i, j, k; 
	printf("���� ����� �����ϰ� �ִ� �ݾ� : "); 
	scanf("%d", &cash); 
	for(i = 1; i < cash / pain; i++)	{ 
		for(j = 1; j < cash / shrimp; j++) { 
			for(k = 1; k < cash / coke; k++)	{ 
				if(cash == pain * i + shrimp * j + coke * k) { 
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", i, j, k); 
				} 
			} 
		} 
	} 
	return 0; 
}
