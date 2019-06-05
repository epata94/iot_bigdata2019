#include <stdio.h>
#pragma warning (disable:4996)

typedef struct person {
	char name[20];
	char phoneNum[20];
	int age;
} Person;

void ShowPersonInfo(Person man) {
	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

// 함수는 기본적으로 한개의 값만 리턴할 수 있다.
// 하지만 아래와 같이 구조체를 사용한다면 구조체의 멤버를 활용하여
// 논리적으로 2개 이상의 값에 대하여 리턴이 가능하다.
Person ReadPersonInfo() {
	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phone? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%d", &man.age);
	return man;
}

void main() {
	// 구조체에 대해서는 같은 struct 형에 대하여 C에서 제공하는 모든
	// 기본형에 대한 대입 연산을 지원하고 있다.
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
}
