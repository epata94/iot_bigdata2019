#include <stdio.h>

void main(){
	int cur, is;

	// 2차원 공간의 데이터나 화면출력은 while문 보다 for문이 유리하다.
	printf("구구단을 외자!\n");
	for(cur=2; cur<10; cur++){
		printf("== %d단 ==\n",cur);
		for(is=1;is<10;is++){
			printf("%d * %d = %d\n", cur, is, cur*is);
		}
		printf("\n");
	}
}

