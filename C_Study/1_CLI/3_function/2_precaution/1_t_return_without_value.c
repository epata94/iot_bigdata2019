#include <stdio.h>
void my_login(void){
	const int my_password=1074618;
	const unsigned char max_count=3;
	const unsigned char iot_true=1;
	const unsigned char iot_false=0;
	int input_count=0;
	int input_password=0;

	for( ;input_count<max_count; input_count++){
		printf("패스워드를 입력하세요: ");
		scanf("%d",&input_password);

		if(my_password == input_password){
			printf("IoT 빅데이터반 입장가능합니다.\n");
			return; // return을 만나게 되면 함수 자체를 무조건 빠져나온다.
					// 반복문에서 break와 유사하다.
		}
	}
	
	printf("\n패스워드 최대 입력 회수 %d회를 초과하였습니다.\n",max_count);
	printf("행정실로 확인절차 부탁합니다.");
}

void main(){
	my_login();	
}

