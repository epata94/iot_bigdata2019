#include <stdio.h>

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)){
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2){
	if(age1>age2)
		return age1;
	else if(age1<age2)
		return age2;
	else
		return 0;
}


void main(){

}

