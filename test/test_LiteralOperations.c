#include "unity.h"
#include "LiteralOperations.h"

void setUp(){}
void tearDown(){}

void test_createByteCode_should_create_bytecode_properly(){
	ByteCode *addlw;
	addlw = createByteCode();
	
	TEST_ASSERT_NOT_NULL(addlw);
	TEST_ASSERT_EQUAL(-1, addlw->operand1);
	TEST_ASSERT_EQUAL(-1, addlw->operand2);
	TEST_ASSERT_EQUAL(-1, addlw->operand3);
	TEST_ASSERT_EQUAL(0, addlw->instruction->mnemonic);
	TEST_ASSERT_EQUAL_STRING("", addlw->instruction->name);
}

void test_execute_should_execute_correct_function(){
	ByteCode *addlw;
	addlw = createByteCode();
	
	addlw->instruction->name = "addlw";
	
	//TEST_ASSERT_NOT_EQUAL(1, execute(addlw));
}