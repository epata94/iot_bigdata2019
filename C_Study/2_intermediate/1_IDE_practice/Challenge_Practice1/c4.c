#include <stdio.h>
#pragma warning (disable:4996)
int main(void) { 
	int cash, pain = 500, shrimp = 700, coke = 400; 
	int i, j, k; 
	printf("현재 당신이 소유하고 있는 금액 : "); 
	scanf("%d", &cash); 
	for(i = 1; i < cash / pain; i++)	{ 
		for(j = 1; j < cash / shrimp; j++) { 
			for(k = 1; k < cash / coke; k++)	{ 
				if(cash == pain * i + shrimp * j + coke * k) { 
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i, j, k); 
				} 
			} 
		} 
	} 
	return 0; 
}
