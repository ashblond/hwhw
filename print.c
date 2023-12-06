#include "global.h"

// 로고 생성
void print_logo()
{
	// 학번, 이름 수정
	printf("**********************************************\n");
	printf("*                                            *\n");
	printf("* Simple cortex_m0 Instruction Set Simulator *\n");
	printf("*                                            *\n");
	printf("*                                            *\n");
	printf("*               전자공학과 xxxxxxxxx 황용택  *\n");
	printf("**********************************************\n");

	printf("\n");
}

//GPR 출력
void print_status() {

	printf("\nGPR:\n");
	for (int i = 0; i < 16; i++)
	{
		printf("[%02d] 0x%08X", i, GPR[i]);
		if (i % 8 < 7)
			printf(" ");
		else
			printf("\n");
	}
	printf("\n");
}