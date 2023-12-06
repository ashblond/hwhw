#include "global.h"

void IM_Load(char *instruction_file) {
	char instruction[5];			
	short temp;
	FILE* fp = NULL;

	fp = fopen(instruction_file, "r");									//instruction file�� ����

	for (int i = 0; i < 1024; i++) {									//Instruction Memory ũ�⸸ŭ �ݺ�
		if (fgets(instruction, sizeof(char) * 5, fp)) {					//���� �ϳ��� ��ɾ ���������� �о��ٸ�
			Instruction_count++;										//��ɾ��� ���� ����

			for (int j = 0; j < 4; j++) {								//4�� �ݺ�
				if (instruction[j] >= 'A') temp = instruction[j] - 'A' + 10;	//�Է¹��� ����(����)�� 16������ ��ȯ
				else temp = instruction[j] - '0';						//�Է¹��� ����(����)�� 16������ ��ȯ

				Instruction_Mem[i] = Instruction_Mem[i] | (temp<<(4*(3-j)));	//������ 16���� ���� IM�� OR �����Ͽ� ����

			}
			fseek(fp, 2, SEEK_CUR);										//���� ��ɾ �б� ���� ������ �̵�
		}
		else break;
	}

	fclose(fp);
}