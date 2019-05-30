#include <stdio.h>

void Rotate4by4(int (*(Array))[4]){
	
	int i, j;
	int temp;

	/* 반복문 쓰기 전 하드 코딩

	temp = Array[0][0];
	Array[0][0] = Array[3][0];
	Array[3][0] = Array[3][3];
	Array[3][3] = Array[0][3];
	Array[0][3] = temp;

	temp = Array[0][1];
	Array[0][1] = Array[2][0];
	Array[2][0] = Array[3][2];
	Array[3][2] = Array[1][3];
	Array[1][3] = temp;

	temp = Array[0][2];
	Array[0][2] = Array[1][0];
	Array[1][0] = Array[3][1];
	Array[3][1] = Array[2][3];
	Array[2][3] = temp;

	*/

	for (i = 0; i < 3; i++) { // 이 반복문에서는 테두리에 저장된 값만 회전합니다.
		temp = Array[0][i];
		Array[0][i] = Array[3 - i][0];
		Array[3 - i][0] = Array[3][3 - i];
		Array[3][3 - i] = Array[i][3];
		Array[i][3] = temp;
	}

	temp = Array[1][1]; // 안쪽 4개 값 일회전
	Array[1][1] = Array[2][1];
	Array[2][1] = Array[2][2];
	Array[2][2] = Array[1][2];
	Array[1][2] = temp;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", Array[i][j]);
		}
		printf("\n\n");
	}
	printf("\n");
}

void main() {

	int FourByFour[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int i;
	int j;

	for (i = 0; i < 4; i++) { // 초기화된 값 일차 출력
		for (j = 0; j < 4; j++) {
			printf("%4d", FourByFour[i][j]);
		}
		printf("\n\n");
	}
	printf("\n");

/* 배열의 값 변환 없이 출력만 회전하는 코드(함수 필요없음)

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d ", FourByFour[3-j][i]);
		}
		printf("\n\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d ", FourByFour[3-i][3-j]);
		}
		printf("\n\n");
	}
	printf("\n");

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d ", FourByFour[j][3-i]);
		}
		printf("\n\n");
	}
	printf("\n");
*/

	Rotate4by4(FourByFour); // 1번 회전(시계방향)
	Rotate4by4(FourByFour); // 2번 회전
	Rotate4by4(FourByFour); // 3번 회전
	Rotate4by4(FourByFour); // 마지막 회전 - 초기 배열과 일치하는 것을 볼 수 있다.
}