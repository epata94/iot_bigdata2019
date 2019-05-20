#include <stdio.h>

void main(){
//	unsigned long long my_password=48579375347957395;
//	unsigned long long input_password=0;
//	const의 이름은 모두 대문자로 쓰는 것이 관례(Naming Convention)이다. 
	const unsigned long long MY_PASSWORD=48579375347957395;
	unsigned long long input_password=0;
	const int MY_MAX;
	// MY_MAX의 값을 최초로 정의(define) 하지만 그 이전에 MY_MAX가 선언되는
	// 과정에서 초기화 되었으므로 아래 라인은 const 값의 변경을 시도하는 
	// 것이기 때문에 컴파일 에러를 발생한다.
	// 따라서 const는 무조건 선언과 동시에 초기값을 할당하여야 한다.
	// MY_MAX=10000;

	printf("password를 입력하세요. (19자리 이내): ");
	scanf("%lld",&input_password);

//	if(48579375347957395 == input_password){
	if(MY_PASSWORD == input_password){
		printf("Password가 일치합니다. 입장 가능합니다.\n");
		printf("현재 저장되어 있는 Password는 %lld입니다.\n", MY_PASSWORD);
	}else{
		printf("Password가 불일치합니다. 돌아가세요.\n");
	}

	printf("MY_MAX: %d\n", MY_MAX);	
}
