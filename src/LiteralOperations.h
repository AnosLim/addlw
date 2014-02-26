#ifndef __LITERAL_OPERATIONS_H_
#define __LITERAL_OPERATIONS_H_

typedef enum {ADDLW} Mnemonic;

typedef struct{
	Mnemonic mnemonic;
	char *name;
}Instruction;

typedef struct {
	Instruction *instruction;
	int operand1;
	int operand2;
	int operand3;
}ByteCode;

extern char FSR[];

//Function Prototypes
ByteCode *createByteCode();
int execute(ByteCode *code);

#endif  //__LITERAL_OPERATIONS_H_