#include "global.h"

void Execution(int Instruction_number) {
	short instruction = 0;
	unsigned int opcode = 0;
	int rm = 0;
	int rn = 0;
	int rd = 0;
	int imm = 0;

	instruction = Instruction_Mem[Instruction_number];	//Instruction Memory에서 실행할 명령어 읽기
	printf("instruction: %X\n", instruction);

	opcode = instruction >> 14;							//MSB 2비트를 읽어서 instruction class 구분
	if (opcode == 0) {									//MSB 2비트가 0일때
		opcode = instruction >> 11;						//MSB 5비트의 값이 4일때
		if (opcode == 4) opcode = MOVS;					//opcode가 MOVS라고 판별
	}

	switch (opcode) {
	//MOVS
	case MOVS:											//MOVS명령어
		rd = (instruction >> 8) & 7;					//rd 계산
		imm = (instruction)		& 255;					//imm 계산

		GPR[rd] = imm;									//레지스터의 값을 연산
		printf("MOVS  R%d, #%d", rd, imm);
		GPR[15] += 2;	//PC값 업데이트
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