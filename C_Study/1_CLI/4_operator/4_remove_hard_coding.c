#include <stdio.h>

void main(){
	int accumulated_total=0;
	int daily_income=0;
	int daily_expense=0;

	printf("혜경이의 5월 총 수입: %d\n", accumulated_total);

	daily_income=10000;
	accumulated_total+=daily_income;
	printf("CU편의점에서  %d원 수입\n",daily_income);
	printf("5월 1일 혜경이의 5월 총 수입: %d\n", accumulated_total);

	daily_income=30000;
	accumulated_total+=daily_income;
	printf("CU편의점에서  %d원 수입\n",daily_income);
	printf("5월 3일 혜경이의 5월 총 수입: %d\n", accumulated_total);

	daily_expense=5000;
	accumulated_total -= daily_expense;
	printf("큰고개 식당에서 %d원 점심값 지출\n",daily_expense);
	printf("5월 3일 혜경이의 5월 총 수입: %d\n", accumulated_total);

	daily_expense=20000;
	accumulated_total -= daily_expense;
	printf("VIPS에서 남자친구와  %d원 저녁값 지출\n",daily_expense);
	printf("5월 3일 혜경이의 5월 총 수입: %d\n", accumulated_total);

	daily_income=50000;
	accumulated_total+=daily_income;
	printf("CU편의점에서  %d원 수입\n",daily_income);
	printf("5월 4일 혜경이의 5월 총 수입: %d\n", accumulated_total);

	accumulated_total+=40000;
	printf("CU편의점에서  40000원 수입\n");
	printf("5월 5일 혜경이의 5월 총 수입: %d\n", accumulated_total);

}
