#include <stdio.h>

void main(){
	int villa[4][2];
	int popu, i,j;

	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			// 인덱스를 논리적으로 표현(출력)하기 위해서는
			// 각각의 인덱스에 1을 더해야 한다.
			// Why? 인덱스는 0부터 시작하기 때문이다.
			printf("%d층 %d호 인구수: ", i+1, j+1);
			scanf("%d", &villa[i][j]);
		}
	}
/*
	for(i=0; i<4;i++){
		popu=0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d층 인구수: %d\n", i+1, popu);
	}
*/
	for(i=0; i<4;i++){
		popu=0;
		for(j=0; j<2; j++){
			popu += villa[i][j];
		}
		printf("%d층 인구수: %d\n", i+1, popu);
	}
}
