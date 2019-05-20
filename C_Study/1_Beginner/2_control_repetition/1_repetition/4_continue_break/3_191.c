#include <stdio.h>

void main(){
	int num;
	printf("Start! ");

	for(num=1; num<20; num++){
		if(num%2==0 || num%3==0)
			// 반복문에서 continue를 만나게 되면 continue 이하의 반복문 내부의 명령문은 모두 skip하고
			// 반복문 첫번째 줄로 이동하게 된다.
			continue;
		printf("%d ",num);
	}
	printf("end! \n");
}

