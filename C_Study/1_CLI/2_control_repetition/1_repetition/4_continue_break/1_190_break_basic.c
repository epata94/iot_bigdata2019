#include <stdio.h>

void main(){
	int sum=0;
	int number=0;
	const unsigned char iot_true=1;
	const int target_accumulated_number=5000;

	while(iot_true){
		sum += number;
		if(sum > target_accumulated_number){
			// 반복문(for, while, do while)에서 break를 만나게 되면
			// 가장 안쪽에 있는 반복문을 강제로 벗어나게 된다.
			break;
		}
		number++;
	}

	printf("sum: %d, 제한 누적수: %d) \n", sum,target_accumulated_number);
	printf("최종 number: %d \n", number);
}

