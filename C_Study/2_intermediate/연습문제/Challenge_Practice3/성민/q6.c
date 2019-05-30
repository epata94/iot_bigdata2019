#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void main(){
	int number[3]={-1, -2, -3};
	int input_number;
	int user[3] = {-1, -2, -3};
	int i=0, k;
	int strike=0;
	int ball=0;
	int index=0;

	srand((int)time(NULL));

	// 중복 있을 때 한 번에 3개씩 변경
	while(1){
		for(i=0; i<3; i++){
			number[i]=rand()%10;
		}
		if(number[0] != number[1] && number[0] != number[2] && number[1] != number[2]){
			break;
		}
	}
	
	//1 개씩 변경
	/*
	while(i!=3){
		for(i=0; i<3; i++){
			number[i]=rand()%10;
			if (number[0] == number[1] || number[0] == number[2] || number[1] == number[2]) {
				i--;
				continue;
			}
		}
	}
	*/

	printf("확인용: ");
	for(i=0; i<3; i++){
		printf("%d ", number[i]);
	}
	printf("\n");


	while(strike<3){
		printf("0~9의 서로 다른 정수 3개 선택 (ex 2 5 3) : ");
		for(i=0; i<3; i++){
			scanf("%d", &user[i]);

		}

		strike=0;
		ball=0;

		for(i=0; i<3; i++){  
			for(k=0; k<3; k++){
				if(user[i] == number[k]){
					ball++;
					if(i==k){
						strike++;
						if(strike==3){
							ball=0;
						}
					}
				}
			}
		}

		index++;

		printf("%d번째 도전 결과 : %d strike, %d ball!!\n\n", index, strike, ball);
	}
	printf("Game Over!");
}


