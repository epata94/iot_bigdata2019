#include <stdio.h>

void main(){
	float my_pi=3.14159211111111;

	// FLOATING(�Ǽ���) Ÿ��(float, doulbe, long double ..) ������
	// '==' �����ڷ� ���ϴ� ���� 100% True�� �̲��� �� �� ����.
	// FLOATING Ÿ�� ������ ���� ����Ǵ� ���� �ƴ϶� ������ ����Ǳ�
	// �����̴�. P 90 ����
	if(my_pi == 3.141592)
		printf("Correct PI!");

	printf("my_pi: %f\n", my_pi);
	printf("my_pi: %.10lf\n", my_pi);
}
