#include <stdio.h>
// 구구단: multiplication table, (informal) times tables
void main(){
	int multiplication=0, num=1;
	printf("몇 단? ");
	scanf("%d", &multiplication);

	/*
	printf("%d * 1 = %d\n",multiplication,multiplication*1);
	printf("%d * 2 = %d\n",multiplication,multiplication*2);
	printf("%d * 3 = %d\n",multiplication,multiplication*3);
	printf("%d * 4 = %d\n",multiplication,multiplication*4);
	printf("%d * 5 = %d\n",multiplication,multiplication*5);
	printf("%d * 6 = %d\n",multiplication,multiplication*6);
	printf("%d * 7 = %d\n",multiplication,multiplication*7);
	printf("%d * 8 = %d\n",multiplication,multiplication*8);
	printf("%d * 9 = %d\n",multiplication,multiplication*9);
	*/

	while(num<10){
		printf("%d * %d = %d\n", multiplication, num, multiplication*num);
		num++;
	}
}

