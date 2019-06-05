#include <stdio.h>
typedef struct {
	int xpos;
	int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}

// Call by Reference type1: 인자에 대한 주소값을 넘겨줌
// 장점: 인자에 대한 메모리 카피 작업이 일어나지 않아서
//       프로그램 속도, 메모리 사용 효율을 높일 수 있다.
Point AddPoint2(Point* pos1, Point* pos2) {
	Point pos = { (pos1->xpos) + (pos2->xpos), (pos1->ypos) + (pos2->ypos) };
	return pos;
}

// Call by Reference type2: 인자 및 반환 값까지도 매개변수로 처리하여
//                          넘겨줌
// 장점: 호출 하는 쪽에서 반환 값에 대한 메모리 카피가 일어나지 않아
//       프로그램 속도, 메모리 사용 효율을 높일 수 있다.
void AddPoint3(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (pos1->xpos) + (pos2->xpos);
	pos3->ypos = (pos1->ypos) + (pos2->ypos);
}

// Call by Referenct type3: type2와 동일하며 추가 적으로
// 반환값을 정의하며 해당 반환 값은 오로지 함수가 정상적으로 수행했는지에
// 대한 에러코드를 리턴함 (실전에서 많이 사용)
// ex) 0: 정상 수행, 1: 인자 값의 문제, 2: Segmantation Fault ...
int AddPoint4(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (pos1->xpos) + (pos2->xpos);
	pos3->ypos = (pos1->ypos) + (pos2->ypos);

	return 0;
}

Point MinPoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

Point MinPoint2(Point* pos1, Point* pos2) {
	Point pos = { (pos1->xpos) - pos2->xpos, (pos1->ypos) - (pos2->ypos) };
	return pos;
}

Point MinPoint3(Point pos1, Point pos2) {
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

void main() {
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;

	printf("Call by Value Style\n");
	result = AddPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = MinPoint(pos1, pos2);
	printf("[%d, %d] \n\n", result.xpos, result.ypos);

	printf("Call by Reference Style 1\n");
	result = AddPoint2(&pos1, &pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = MinPoint2(&pos1, &pos2);
	printf("[%d, %d] \n\n", result.xpos, result.ypos);

	printf("Call by Reference Style 2\n");
	AddPoint3(&pos1, &pos2, &result);
	printf("[%d, %d] \n", result.xpos, result.ypos);
}
