#include <stdio.h>
// 함수 유형 2
// 반환타입 X, 인자 O (반환타입이 없고 인자는 있는 케이스)
// 함수 수행에 필요한 중요한 input은 호출하는 쪽에서 setting을 하여
// 넘긴다.
// 장점: 입력 값에 대하여 신경쓰지 않고 함수의 메인 기능에 집중할 수 있다.
// 단점: 호출 하는 쪽에서 입력에 대한 정확한 스펙을 알아야 사용할 수 있다.
void my_add(int input_number1, int input_number2){ 
	int result;

	printf("\n- 간단한 덧셈 연산 ver1\n");
	if(input_number1 > 0 && input_number2 >0){
		printf("첫 번째 입력: %d\n", input_number1);
		printf("두 번째 입력: %d\n", input_number2);

		result = input_number1 + input_number2;
		printf("%d + %d = %d\n",input_number1, input_number2, result);
	}else{
		printf("양수의 결과에 대해서만 연산을 지원합니다. ");
	}
	
}

void main(){ 
	int number1, number2;

	while(1){
		printf("\n두 수를 입력하세요: ");
		scanf("%d %d",&number1, &number2);
		if(number1 <0 || number2 <0){
			printf("현재 덧셈 연산은 양수만 가능합니다. 확인하고 다시 입력하세요.\n");
		}else{
			my_add(number1, number2); // 함수 호출(Function Call)
			break;
		}
	}

}

