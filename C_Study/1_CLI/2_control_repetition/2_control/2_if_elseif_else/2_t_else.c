#include <stdio.h>

void main(){
	int num;
	printf("정수 입력: ");
	scanf("%d", &num);
	
	// else는 위에 if 또는 else if에서 다루지 않았던 모든 조건을 포함한다.
	// 즉, default의 성격을 가지고 있다.
/*
	if(num<0){
		printf("입력 값은 0보다 작다. \n");
	}else if(num>0){ 
		printf("입력 값은 0보다 크다. \n");
	}else{
		printf("입력 값은 0이다. \n");
	}
*/
/*
	if(num<0){
	}else if(num==0){
	}else{ // num>0
	}
*/
/*
	if(num>0){
	}else if(num==0){
	}else{ // num<0
	}
*/
	// else의 범위: -7, -6,-3,-2,-1, 1,2,10,11,12,13, 1000이상
	if(num < -7){
		printf("Type A\n");
	}else if(num > -5 && num <-3){
		printf("Type B\n");
	}else if(num == 0){
		printf("Type C\n");
	}else if(num > 2 && num <10){
		printf("Type D\n");
	}else if(num > 13 && num < 1000){
		printf("Type E\n");
	}else{
		printf("Default Type Z로 할당!\n");
	}

}

