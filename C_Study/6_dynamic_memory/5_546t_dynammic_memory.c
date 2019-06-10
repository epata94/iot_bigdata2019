#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

void execute_dynamic_malloc() {
	int number_of_input;
	int* number_warehouse;
	int index;
	int total = 0;

	printf("전체 입력 개수를 설정하세요: ");
	scanf("%d",&number_of_input);

	number_warehouse = (int*)malloc(sizeof(int) * number_of_input);

	for (index = 0; index < number_of_input; index++) {
		printf("%d] 수를 입력하세요: ", index+1);
		scanf("%d", &(number_warehouse[index]));
	}
	for (index = 0; index < number_of_input; index++) {
		total = total + number_warehouse[index];
		printf("입력%d] %d\n", index + 1, number_warehouse[index]);
	}
	printf("총합: %d\n\n", total);

	free(number_warehouse);
	//할당된 메모리는 반드시 한번만 free해 주어야 한다.
	//free(number_warehouse);
}

void main() {
	int menu;

	while (1) {
		puts("동적 메모리 할당을 체험합시다.");
		puts("1. 예제 실행");
		puts("2. 종료");
		printf("메뉴를 선택하세요: ");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			execute_dynamic_malloc();
			break;
		case 2:
			return;
		default:
			puts("1,2 메뉴만 선택하세요.");
		}
	}

}
