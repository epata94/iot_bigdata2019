#include "..\header\7_val.h" 
//#include "header\7_val.h" // <- Windows Style
// Windows�󿡼� Linux Style O

//#include "header/7_val.h" // Linux Style
// Linux �󿡼� Windows Style X
//#include "C:\iot_bigdata2019\C_Study\8_development_by_team\header\7_val.h"
// ������ ������ ���� ū �������� ��ȣ ����� ��������.
// ��ǻ�͸��� �����ΰ� �ٸ� ���
// Linux�󿡼� \�� �ν��� ���� �ʴ� ���

void Increment(void){
	num++;
}

int GetNum(){
	return num;
}
