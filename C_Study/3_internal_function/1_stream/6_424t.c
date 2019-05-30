#include <stdio.h>
#pragma warning (disable:4996)

void main() {
	char* line1 = "Dear Dean\n";
	char* line2 = "Hello my friend!\n";
	char* line3 = "Long time no see.\n";

	printf("fputs test ----- \n");
	printf("FILE IO을 아직 안 배웠으므로 line1~3을 읽어왔다고 가정\n");
	fputs(line1, stdout); putchar('\n');
	fputs(line2, stdout); putchar('\n');
	fputs(line3, stdout); putchar('\n');

}
