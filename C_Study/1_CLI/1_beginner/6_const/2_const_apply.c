#include <stdio.h>

void main(){
	unsigned long long my_password=48579375347957395;
	unsigned long long input_password=0;

	printf("password를 입력하세요. (19자리 이내): ");
	scanf("%lld",&input_password);

//	if(48579375347957395 == input_password){
	if(my_password == input_password){
		printf("Password가 일치합니다. 입장 가능합니다.\n");
		printf("현재 저장되어 있는 Password는 %lld입니다.\n", my_password);
	}else{
		printf("Password가 불일치합니다. 돌아가세요.\n");
	}
	
}
