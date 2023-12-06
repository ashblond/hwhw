#include "global.h"

void GPR_Initialization(void) {
	for (int i = 0; i < 16; i++)
	{
		GPR[i] = 0;						//General Purpose Register를 0으로 초기화
	}

}