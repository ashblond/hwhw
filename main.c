
#include "global.h"

int main(void) {

	print_logo();									//로고 출력

	GPR_Initialization();							//General Purpose Register(GPR) 초기화
	IM_Initialization();							//Instruction Memory(IM) 초기화
	print_status();									//현재 GPR 상태 출력

	IM_Load("instruction.txt");						//실행할 명령어

	for (int i = 0; i < Instruction_count; i++) {	//명령어 개수만큼 실행
		Execution(i);									//명령어를 해석하고 명령 실행
		print_status();
	}

	return 0;
}

