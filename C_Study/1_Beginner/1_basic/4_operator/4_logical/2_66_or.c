#include  <stdio.h>
/* ³í¸® AND Áø¸®Ç¥
 * AÁ¶°Ç	BÁ¶°Ç	°á°ú
 * °ÅÁþ		°ÅÁþ	°ÅÁþ
 * Âü		°ÅÁþ	Âü	
 * °ÅÁþ		Âü		Âü
 * Âü		Âü		Âü
*/
void main(){
	int num1=10, num2=12, result;

	printf("num1: %d, num2: %d\n", num1, num2);

	// °ÅÁþ || °ÅÁþ
	result = (num1 == 1 || num2==1);
	printf("(num1 == 1 || num2==1) => Æò°¡°á°ú: %d\n", result);

	// Âü || °ÅÁþ
	result = (num1 == 10 || num2==1);
	printf("(num1 == 10 || num2==12) => Æò°¡°á°ú: %d\n", result);

	// °ÅÁþ || Âü
	result = (num1 == 1 || num2==12);
	printf("(num1 == 1 || num2==12) => Æò°¡°á°ú: %d\n", result);

	// Âü || Âü
	result = (num1 == 10 || num2==12);
	printf("(num1 == 10 || num2==12) => Æò°¡°á°ú: %d\n", result);
}
