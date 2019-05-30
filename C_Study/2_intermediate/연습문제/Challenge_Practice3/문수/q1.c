#include <stdio.h>
#pragma warning (disable:4996)

int record[4][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12},
	{13,14,15,16}
};

void A();
void B();
void C();
void D();


void main() {

	A();
	B();
	C();
	D();

}






void A(){
	int i;
	int j;

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",record[i][j]);
		}
		printf("\b\n");
	}
	printf("\n\n\n");
}






void B(){
	int i;
	int j;

	for(i=0;i<4;i++)
	{
		for(j=3;j>=0;j--)
		{
			printf("%d\t",record[j][i]);
		}
		printf("\b\n");
	}
	printf("\n\n\n");
}






void C(){
	int i;
	int j;

	for(i=3;i>=0;i--)
	{
		for(j=3;j>=0;j--)
		{
			printf("%d\t",record[i][j]);
		}
		printf("\b\n");
	}
	printf("\n\n\n");
}





void D(){
	int i;
	int j;

	for(i=3;i>=0;i--)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",record[j][i]);
		}
		printf("\b\n");
	}
	printf("\n\n\n");
}
