#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	int ch;
	while (1) {
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
}
