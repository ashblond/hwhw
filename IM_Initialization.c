#include "global.h"

void IM_Initialization(void) {
	for (int i = 0; i < 1024; i++) {
		Instruction_Mem[i] = 0;			//Instruction Memory를 0으로 초기화
	}
}