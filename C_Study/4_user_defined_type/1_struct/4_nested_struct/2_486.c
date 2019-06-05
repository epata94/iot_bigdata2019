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
	// cptr이 주소이기 때문에 아래는 불가능한 문법
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
	// c1은 주소가 아니기 때문에 -> 가 성립하지 않는다.
	// c1->radius;
	// c1.center->

	// 가능한 문법
	c1.radius;
	c1.center.xpos;
	c1.center.ypos;
}
