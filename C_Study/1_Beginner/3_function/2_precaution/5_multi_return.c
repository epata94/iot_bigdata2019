#include <stdio.h>
int NumberCompare(int num1, int num2);

void main(){
	// printf("문장 %d %d %d",N1, N2, N3); <= N1, N2, N3를 먼저 평가하고 그 다음에 포멧스트링과 매칭한다.
	printf("3과 4중에서 큰 수는 %d 이다. \n", NumberCompare(3,4));
	// Step1] printf("3과 4중에서 큰 수는 %d 이다. \n", 4);
	// Step2] printf("3과 4중에서 큰 수는 4 이다. \n");
	printf("7과 2중에서 큰 수는 %d 이다. \n", NumberCompare(7,2));
}

int NumberCompare(int num1, int num2){
	// 조건에 따라서 다양한 값을 return 할 수 있다.
	/* CASE1
	if(num1>num2){
		return num1;
	}else{
		return num2;
	}
	*/
	/* CASE2
	if(num1>num2){
		return num1;
	}else if(num2>num1){
		return num2;
	}else{
		return 0;
	}
	*/
	// CASE3
	if(num1>num2){
		return num1;
	}else if(num2>num1){
		return num2;
	}
	// 추가적인 명령문을 실행하고 싶은 경우에 CASE2번과 차별화되어 프로그래밍 할 수 있다.
	// 명령문1
	// ..
	// 명령문N
	return 0;
}
