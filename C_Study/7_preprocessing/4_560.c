#define SQUARE(X) X*X
#define SQUARE2(X) (X)*(X)
#define PI 3.14

int main(){
	int result;
	double d_result;
	int num=20;

	d_result = PI;
	result = SQUARE(num);
	result = SQUARE(-5);
	result = SQUARE(2.5);
	result = SQUARE(PI);
	result = SQUARE(3+2);
	result = SQUARE((3+2));
	result = SQUARE2(3+2);
	result = 120 / SQUARE2(2);
}
