#include <stdio.h>
#pragma warning (disable:4996)

typedef struct{
	int xpos;
	int ypos;
} Point;

typedef struct{
	Point center;
	double radius;
}Circle;

void ShowCircleInfo(Circle* cptr) {
	// cptr�� �ּ��̱� ������ �Ʒ��� �Ұ����� ����
	//	cptr.center;
	//(cptr->center)->xpos;
	//cptr->center->xpos;
	printf("[%d, %d] \n", (cptr->center).xpos, (cptr->center).ypos);
	printf("radius: %g \n\n", cptr->radius);
}

void main() {
	Circle c1 = { {1,2}, 3.5 };
	Circle c2 = { 2, 4, 3.9 };

	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);
	// c1�� �ּҰ� �ƴϱ� ������ -> �� �������� �ʴ´�.
	// c1->radius;
	// c1.center->

	// ������ ����
	c1.radius;
	c1.center.xpos;
	c1.center.ypos;
}
