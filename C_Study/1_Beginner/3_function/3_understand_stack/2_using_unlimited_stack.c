#include <stdio.h>

int my_sum(int number) {
	static int sum = 0;

	number++;
	if (number > 3)
		return 0;
	else
		sum = sum + my_sum(number);
	return sum;
}

void main(){
	int total;
	int init_value=0;

	total = my_sum(init_value);
	printf("total: %d\n", total);
}
