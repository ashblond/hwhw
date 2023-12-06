#include "global.h"

// �ΰ� ����
void print_logo()
{
	// �й�, �̸� ����
	printf("**********************************************\n");
	printf("*                                            *\n");
	printf("* Simple cortex_m0 Instruction Set Simulator *\n");
	printf("*                                            *\n");
	printf("*                                            *\n");
	printf("*               ���ڰ��а� xxxxxxxxx Ȳ����  *\n");
	printf("**********************************************\n");

	printf("\n");
}

//GPR ���
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