#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	int user;
	int computer;
	int win=0;
	int lose=0;
	int draw=0;
	char *choice[]={"����", "����", "��"};

	printf("1: ����, 2: ����, 3: ��\n");
	while(lose != 1){
		printf("������ ���ڽ��ϱ�? : ");
		scanf("%d", &user);
	
		while(user>3 || user<1){
			printf("�ٽ� �����ϼ���. : ");
			scanf("%d", &user);
		}
	
		srand((int)time(NULL));
		computer=rand()%3+1;

		printf("����� \'%s\' ����, ��ǻ�ʹ� \'%s\' ����, ", choice[user-1], choice[computer-1]);

		if(user == computer){
			printf("�����ϴ�!\n\n");
			draw++;
		}else if(user+1 == computer || (user == 3 && computer==1)){
				printf("����� �̰���ϴ�!\n\n");
				win++;
		}else{
			printf("����� �����ϴ�!\n\n");
			lose++;
		}
	}
	
	printf("������ ��� : %d��, %d��", win, draw);

}


/* �� ���� �� ����.
 
		if(user == computer){
			printf("�����ϴ�!\n\n");
			draw++;
		}else if(user == 3){
			if(computer==1){
				printf("����� �̰���ϴ�!\n\n");
				win++;
			}else{
				printf("����� �����ϴ�!\n\n");
				lose++;
			}
		}else if(user<computer){
			printf("����� �̰���ϴ�!\n\n");
			win++;
		}else{
			printf("����� �����ϴ�!\n\n");
			lose++;
		}

   */
