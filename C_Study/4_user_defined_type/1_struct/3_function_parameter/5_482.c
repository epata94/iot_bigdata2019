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
	// ����ü�� ���� ������ ���� ���� ���ؼ��� �����ϴ�.
	//pos3 = pos1;
	// ����ü�� ���� ���길 �����ϰ� ��������� ������ ��Ÿ �ٸ� ������ �������� �ʴ´�.
	pos2 = pos2 + pos1;
}
