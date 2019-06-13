#include "..\header\7_val.h" 
//#include "header\7_val.h" // <- Windows Style
// Windows상에서 Linux Style O

//#include "header/7_val.h" // Linux Style
// Linux 상에서 Windows Style X
//#include "C:\iot_bigdata2019\C_Study\8_development_by_team\header\7_val.h"
// 절대경로 지정시 가장 큰 문제점은 상호 운영성이 떨어진다.
// 컴퓨터마다 절대경로가 다른 경우
// Linux상에서 \가 인식이 되지 않는 경우

void Increment(void){
	num++;
}

int GetNum(){
	return num;
}
