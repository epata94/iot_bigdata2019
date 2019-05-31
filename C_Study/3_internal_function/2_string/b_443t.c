#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
// 사용자로 부터 패스워드를 입력 받아서 일치 하면 로그인 메세지 출력
// 일치 하지 않으면 경고메세지와 함께 3회까지 패스워드를 입력받게 함
void main() {
	const char* my_password = "dlgusrn";
	char input_pasword[30];
	int index;
	const int max_count = 3;

	for (index = 0; index < max_count; index++) {
		//printf("비밀번호를 입력하세요: ");
		fputs("비밀번호를 입력하세요: ", stdout);
		//scanf("%s", input_pasword);
		gets(input_pasword);

		if (!strcmp(my_password, input_pasword)) {
			puts("패스워드가 일치합니다.");
			puts("로그인 하겠습니다.");
			break;
		}
		else {
			printf("패스워드가 %d회 불일치합니다.",index+1);
			if (index == 2) {
				printf("%d회 불일치 되었으므로 계정을 임시 잠그겠습니다.\n",index+1);
				puts("본인 추가 인증을 통하여 패스워드 재설정을 해주세요");
				break;
			}
			puts("다시 입력하세요.");
		}

	}


}
