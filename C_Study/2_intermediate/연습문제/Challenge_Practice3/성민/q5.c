#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	int user;
	int computer;
	int win=0;
	int lose=0;
	int draw=0;
	char *choice[]={"바위", "가위", "보"};

	printf("1: 바위, 2: 가위, 3: 보\n");
	while(lose != 1){
		printf("무엇을 내겠습니까? : ");
		scanf("%d", &user);
	
		while(user>3 || user<1){
			printf("다시 선택하세요. : ");
			scanf("%d", &user);
		}
	
		srand((int)time(NULL));
		computer=rand()%3+1;

		printf("당신은 \'%s\' 선택, 컴퓨터는 \'%s\' 선택, ", choice[user-1], choice[computer-1]);

		if(user == computer){
			printf("비겼습니다!\n\n");
			draw++;
		}else if(user+1 == computer || (user == 3 && computer==1)){
				printf("당신이 이겼습니다!\n\n");
				win++;
		}else{
			printf("당신이 졌습니다!\n\n");
			lose++;
		}
	}
	
	printf("게임의 결과 : %d승, %d무", win, draw);

}


/* 더 줄일 수 있음.
 
		if(user == computer){
			printf("비겼습니다!\n\n");
			draw++;
		}else if(user == 3){
			if(computer==1){
				printf("당신이 이겼습니다!\n\n");
				win++;
			}else{
				printf("당신이 졌습니다!\n\n");
				lose++;
			}
		}else if(user<computer){
			printf("당신이 이겼습니다!\n\n");
			win++;
		}else{
			printf("당신이 졌습니다!\n\n");
			lose++;
		}

   */
