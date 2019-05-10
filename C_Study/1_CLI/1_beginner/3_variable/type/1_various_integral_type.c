#include <stdio.h>
/*
  c: 1 byte 문자
hhd: 정수형 char
 hd: short
  d: 부호가 있는 10진수 정수 (char, short, int 계열)
 ld: long
lld: long long
  u: 부호 없는 10진수 정수 (unsigned int, unsigned short, unsigned char)
llu: unsigned long long  
  f: float, double
 Lf: long double
*/


void main(){
	int int_max=2147483647;
	int int_max_test=2147483648;
	signed int sint_max=2147483647;
	unsigned int uint_max=4294967295;
	unsigned uint_max2=4294967295;
	float f_test=1.12345678901234567890;
	long double ld_test=1.12345678901234567890;

	printf("int 최대값: %d\n", int_max);
	// visual studio 2019 컴파일러에서 int를 4byte로 처리하기 때문에
	// int 타입으로는 2,147,483,647 이상의 값을 표현할 수 없다.
	printf("int_max + 1 : %d\n", int_max_test);
	printf("signed int 최대값: %d\n", sint_max);
	printf("unsigned int 최대값: %u\n", uint_max);
	printf("unsigned 최대값: %u\n", uint_max2);

	printf("float 정밀도: %.25f\n", f_test);
	printf("long double 정밀도: %.25Lf\n", ld_test);

}
