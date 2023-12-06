#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define	ADDS	1
#define SUBS	2
#define SUB		3
#define LDR		4
#define STR		5
#define MOVS	6
#define BX		7
#define ANDS	8
#define ORRS	9

int GPR[16];
short Instruction_Mem[1024];
int Instruction_count;


