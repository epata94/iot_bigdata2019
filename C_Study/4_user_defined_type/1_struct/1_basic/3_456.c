#include <stdio.h>
#pragma warning (disable:4996)
struct point {
	int xpos;
	int ypos;
};
struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

void func(struct person* sungmin){
	struct person xx;
}

void main() {
	struct point my_pos = { 10,20 };
	struct person Sungmin = { "성민","010-1111-2222",19 };
	struct person man1, man2;
	// 아래 person은 변수가 아니라 타입이기 때문에 실행할수 없다.
	//strcpy(person.name, "홍길동");
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	// struct 내부의 변수에 대한 주소는 멤버의 타입에 따라
	// 결정된다.
	printf("이름 입력: "); scanf("%s", man2.name);
	printf("번호 입력: "); scanf("%s", man2.phoneNum);
	printf("나이 입력: "); scanf("%d", &(man2.age));
	
	printf("이름: %s \n", man1.name);
	printf("번호: %s \n", man1.phoneNum);
	printf("나이: %d \n", man1.age);
	
	printf("이름: %s \n", man2.name);
	printf("번호: %s \n", man2.phoneNum);
	printf("나이: %d \n", man2.age);

}
