#include "global.h"

void IM_Load(char *instruction_file) {
	char instruction[5];			
	short temp;
	FILE* fp = NULL;

	fp = fopen(instruction_file, "r");									//instruction file을 열기

	for (int i = 0; i < 1024; i++) {									//Instruction Memory 크기만큼 반복
		if (fgets(instruction, sizeof(char) * 5, fp)) {					//만약 하나의 명령어를 정상적으로 읽었다면
			Instruction_count++;										//명령어의 개수 증가

			for (int j = 0; j < 4; j++) {								//4번 반복
				if (instruction[j] >= 'A') temp = instruction[j] - 'A' + 10;	//입력받은 문자(영어)를 16진수로 변환
				else temp = instruction[j] - '0';						//입력받은 문자(숫자)를 16진수로 변환

				Instruction_Mem[i] = Instruction_Mem[i] | (temp<<(4*(3-j)));	//각각의 16진수 값을 IM과 OR 연산하여 저장

			}
			fseek(fp, 2, SEEK_CUR);										//다음 명령어를 읽기 위한 포인터 이동
		}
		else break;
	}

	fclose(fp);
}