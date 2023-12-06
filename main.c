
#include "global.h"

int main(void) {

	print_logo();									//�ΰ� ���

	GPR_Initialization();							//General Purpose Register(GPR) �ʱ�ȭ
	IM_Initialization();							//Instruction Memory(IM) �ʱ�ȭ
	print_status();									//���� GPR ���� ���

	IM_Load("instruction.txt");						//������ ��ɾ�

	for (int i = 0; i < Instruction_count; i++) {	//��ɾ� ������ŭ ����
		Execution(i);									//��ɾ �ؼ��ϰ� ��� ����
		print_status();
	}

	return 0;
}

