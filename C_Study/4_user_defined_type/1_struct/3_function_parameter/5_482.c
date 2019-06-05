#include <stdio.h>

typedef struct {
	int xpos;
	int ypos;
} Point;

typedef struct {
	char name[20];
	int xpos;
	int ypos;
} Point2;

void main() {
	Point pos1 = { 1,2 };
	Point pos2;
	Point2 pos3;
	int arr[2] = { 1,2 };

	pos2 = pos1;
	// 구조체의 대입 연산은 같은 형에 대해서만 가능하다.
	//pos3 = pos1;
	// 구조체는 대입 연산만 가능하고 산술연산을 포함한 기타 다른 연산은 지원하지 않는다.
	pos2 = pos2 + pos1;
}
