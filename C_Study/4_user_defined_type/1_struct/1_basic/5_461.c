#include <stdio.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};

void main() {
	struct point arr[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("점의 좌표 입력: ");
		scanf("%d %d", &(arr[i].xpos), &arr[i].ypos);
	}
	for (i = 0; i < 3; i++) {
		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
	}
	arr[1].ypos;
}
