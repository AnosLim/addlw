#include "LiteralOperations.h"
#include <malloc.h>
#include <stdio.h>

char FSR[0x1000];

ByteCode *createByteCode(){
	ByteCode *code = malloc(sizeof(ByteCode));
	code->instruction->mnemonic = 0;
	code->instruction->name = "";
	code->operand1 = -1;
	code->operand2 = -1;
	code->operand3 = -1;
	
	return code;
}

// int execute(ByteCode *code){
	// switch(code->instruction->mnemonic){
		// case 1:
			// executeAddlw(code->operand1);
			// return 1;
			// break;
	// }
// }