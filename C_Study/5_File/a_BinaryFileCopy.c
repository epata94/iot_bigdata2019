#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	FILE * src = fopen("HelloWorld.docx", "rb");
	FILE* des = fopen("HelloWorldCopyed.docx", "wb");

	char buf[20];
	int readCnt;

	if (src == NULL || des == NULL) {
		puts("���� ���� ����!");
		return -1;
	}

	while (1) {
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt < sizeof(buf)) {
			if (feof(src) != 0) {
				fwrite((void*)buf, 1, readCnt, des);
				puts("���� ���� �Ϸ�");
				break;
			}
			else
				puts("���� ���� ����");
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}

	fclose(src);
	fclose(des);
}

