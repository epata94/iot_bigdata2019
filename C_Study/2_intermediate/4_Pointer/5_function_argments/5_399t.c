#include <stdio.h>

void main(int argc, char* argv[]){
	int i=0;


	printf("¼­ºñ½º ·¹º§: %s\n", argv[1]);
	printf("¼­ºñ½º ·¹º§: %c\n", argv[1][0]);

	switch (argv[1][0]){
		case '5':
			printf("¾È³çÇÏ¼¼¿ä.\n");
			break;
		case '4':
			printf("±èÇý°æ¾¾ ¾È³çÇÏ¼¼¿ä.\n");
			break;
		case '3':
			printf("±èÇý°æ´Ô ¾È³çÇÏ¼¼¿ä.\n");
			break;
		case '2':
			printf("VIP °í°´ÀÌ½Å ±èÇý°æ´Ô ¾È³çÇÏ¼¼¿ä.\n");
			break;
		case '1':
			printf("±èÇý°æ´Ô! Ã£¾ÆÁÖ¼Å¼­ ¼ºÀºÀÌ ¸Á±ØÇÏ¿É´Ï´Ù!!\n");
			break;
	}

}

