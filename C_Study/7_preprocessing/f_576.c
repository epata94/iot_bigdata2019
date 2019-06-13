#define CON(UDP, LOW) UDP ## 00 ## LOW

void main(){
	int NUM = CON(22,77);
//	int NUM = 220077;	
}
