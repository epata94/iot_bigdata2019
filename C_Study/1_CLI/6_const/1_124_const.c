//#include <stdio.h> <== Standard IO (ex: printf, scanf �� ����� �� ����.)

void main(){
	int military_serial_number=1472004818; // military_serial_number: ����, 1472004818: ���
	int my_birth_day=750327;
	// const�� constant�� �ǹ��Ѵ�.
	const int ci_military_serial_number=1472004818; //ci const int�� �ǹ�
	const int ci_my_birth_day=750327; // ci_my_birth_day: const

	// ���� �ٲ��� �ʰ� ������ �ϰ����ϴ� ������ �����ʹ�
	// ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
	military_serial_number=1473884737;
	my_birth_day=750327;
	my_birth_day++;
	
	ci_military_serial_number=1473884738;
	ci_my_birth_day=750328;
	ci_my_birth_day++;

}
