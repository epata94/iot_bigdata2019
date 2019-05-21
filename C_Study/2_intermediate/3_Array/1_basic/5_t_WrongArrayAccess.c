#include <stdio.h>

void main(){
	int arr[5];
	int sum=0, i;

	arr[0]=10, arr[1]=20, arr[2]=30, arr[3]=40, arr[4]=50; 

	for(i=0;i<5;i++)
		sum += arr[i];

	printf("배열요소에 저장된 값의 합: %d\n", sum);

	printf("2번째 배열 값: %d\n", arr[1]);
	printf("arr[2]: %d\n", arr[2]);
	// arr[5]는 컴퓨터에서 해당 주소 번지에 남겨져 있는 쓰레기
	// 값을 참조하게 된다.
	// 컴파일러나 해당 주소번지가 사용중이거나 보호중이라면
	// 수행중 런타임 에러를 발생할 수 도 있다.
	printf("arr[5]: %d\n", arr[5]);

	printf("arr[2]의 새로운 값을 입력하세요: ");
	// 배열의 값도 변경이 가능하다.
	scanf("%d", &arr[2]);
	printf("arr[2]: %d\n", arr[2]);
	
	printf("arr[5]의 새로운 값을 입력하세요: ");
	// 일반적인 상황에서는 아래 라인에서 런타임 에러를 발생한다.
	// 발생되는 문제는 컴파일러나 시스템의 메모리 상황에 따라 
	// 다양하게 발생할 수 있다.
	// 컴파일러는 아래와 같이 잘못된 접근에 대한 유효성 검사를 하지
	// 않는다. 따라서 컴파일은 진행되고 수행중 오류를 발생할 수 있기
	// 때문에 개발자의 각별한 주의가 필요하다.
	scanf("%d", &arr[5]);
	printf("arr[5]: %d\n", arr[5]);

	scanf("%d", &arr[4]);
	printf("arr[4]: %d\n", arr[4]);

	for(long long i=0;i<10000000;i++)
		printf("%lld\n",i);

}

