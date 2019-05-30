#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int i;
	for (i = 0; i < 2; i++) {
		srand((int)time(NULL));
		printf("Result of rolling dice (%d): %d \n\n", i+1, rand()%6+1);
	}
}