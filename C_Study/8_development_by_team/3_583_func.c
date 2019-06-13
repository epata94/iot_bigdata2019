extern int num;
static int num2;
//extern int num=10; <== extern 변수는 선언한 파일에서만 초기화가 가능
// 실무에서는 extern 변수를 사용하지 않도록 권고하고 있다.

void Increment(void){
	num++;
	num2++;
}

int GetNum(){
	return num;
}
