#include <stdio.h>

void main(){
	int year=0; // 수감 년도
	int sentence_year=20; // 구형량
	int jailbreak_year=7; // 탈옥가능 년도
	int pysical_level=0; // 체력

	printf("%d년 형량을 받아 입소합니다.\n\n",sentence_year);
	while(1){
		year++;
		if(year % 2==0){
			pysical_level++;
		}	
		printf("%d년 콩밥먹었습니다. 체력: %d \n", year, pysical_level);
		if(year > jailbreak_year){
			printf("탈출시도!\n\n");
			if(pysical_level > 5){
				break;
			}
		}
	}

	printf("%d년차 탈출성공!!!\n",year);

}

