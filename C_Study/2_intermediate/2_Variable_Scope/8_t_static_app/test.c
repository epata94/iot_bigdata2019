#include <stdio.h>
#pragma warning (disable:4996)

void accumulate_daily_income(int daily_income) {
	static int total_profit = 0;
	total_profit = total_profit + daily_income;

	printf("현재 누적 금액: %d\n", total_profit);
}

void main() {
	int daily_income = 0;

	while (1){
		printf("수익금을 입력하세요 (종료=>0): ");
		scanf("%d", &daily_income);
		
		if (daily_income == 0) {
			break;
		}
		printf("현재 %d원 입금했습니다.\n", daily_income);

		accumulate_daily_income(daily_income);
	}
}