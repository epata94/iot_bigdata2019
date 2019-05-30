#include <stdio.h>
#include <stdlib.h>

void main() {
	int i;
	printf("Random number: From 0 to 99\n\n");
	for (i = 0; i < 5; i++) {
		printf("Printing random number: %d \n", rand() % 100);
	}
}