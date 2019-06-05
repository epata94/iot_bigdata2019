#include <stdio.h>
#pragma warning (disable:4996)

struct point {
	int xpos;
	int ypos;
};

void main() {
	struct point pos1 = { 1,2 };
	struct point pos2 = { 100,200 };
	struct point* pptr = &pos1;

	puts("pos1] 포인터 연산");
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);
	printf("[%d, %d] \n\n", pos1.xpos, pos1.ypos);

	puts("pos2] 포인터 연산");
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;
	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);
	printf("[%d, %d] \n\n", pos2.xpos, pos2.ypos);
	

}
