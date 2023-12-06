#include "global.h"

void Execution(int Instruction_number) {
	short instruction = 0;
	unsigned int opcode = 0;
	int rm = 0;
	int rn = 0;
	int rd = 0;
	int imm = 0;

	instruction = Instruction_Mem[Instruction_number];	//Instruction Memory���� ������ ��ɾ� �б�
	printf("instruction: %X\n", instruction);

	opcode = instruction >> 14;							//MSB 2��Ʈ�� �о instruction class ����
	if (opcode == 0) {									//MSB 2��Ʈ�� 0�϶�
		opcode = instruction >> 11;						//MSB 5��Ʈ�� ���� 4�϶�
		if (opcode == 4) opcode = MOVS;					//opcode�� MOVS��� �Ǻ�
	}

	switch (opcode) {
	//MOVS
	case MOVS:											//MOVS��ɾ�
		rd = (instruction >> 8) & 7;					//rd ���
		imm = (instruction)		& 255;					//imm ���

		GPR[rd] = imm;									//���������� ���� ����
		printf("MOVS  R%d, #%d", rd, imm);
		GPR[15] += 2;	//PC�� ������Ʈ
		break;

	//ADDS
	//SUBS
	//SUB
	//LDR
	//STR
	//BX
	//ANDS
	//ORRS

	}

	

}