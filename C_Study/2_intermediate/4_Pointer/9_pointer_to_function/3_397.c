#include <stdio.h>

void SoSimpleFunc(void) {
	printf("I'm so simple");
}

void main(){
	int num = 20;
	void* ptr;

	ptr = &num;
	printf("%p \n", ptr);
	// 아래 코드는 컴파일시 에러를 발생한다.
	// pointer to void 타입은 추후 동적메모리와 같이 사용된다.
	//printf("num: %d\n", *(ptr));

	ptr = SoSimpleFunc;
	printf("%p \n", ptr);

}

