#include <stdio.h>
#pragma warning (disable:4996)

void func2(int n) {
	int num3 = n + 1;
}

void func1(int n) {
	int num2 = n + 1;
	func2(num2);
}

int main() {
	int num1 = 20;
	func1(num1);
	return 0;
}
