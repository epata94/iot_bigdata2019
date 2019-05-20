#include <stdio.h>

void main(){
	int num=0;

	while(num<3){
		printf("Hi~");
		num++;
	}
	printf("\n");

	// for(초기식; 조건식; 증감식){
	// 		Statement; // 명령문
	// 		Statement; // 명령문
	// }
	// 장점: 반복이 되는 조건이 하나의 라인에서 표현되기 때문에
	// 반복 흐름에 대하여 직관적으로 이해할 수 있다
	// 단점: 복잡한 조건을 표현하는데에는 제약사항이 존재한다.
	// 활용: 간단한 반복처리를 할 때 유용하다.
	for(num=0;num<3;num++){
		printf("Hi%d~",num);
	}
}

