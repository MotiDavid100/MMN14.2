#ifndef CONSTANTS_DEFENITION_H
#define CONSTANTS_DEFENITION_H

/*
	This is the main constants defenition of the project
	all the constants related to the project is here
*/

#define AS_SUFFIX ".as"
#define BASE4_FIRST_TWO_DIGIT 4
#define SUB_OPERATION "sub"
#define TRUE 1
#define ARE_ABSOLUTE 0
#define ARE_EXTERNAL 1
#define ARE_RELOCATABLE 2
#define REGISTER_MAX '7'
#define OB_SUFFIX ".ob"
#define TYPE_UNKNOWN -1
#define MAXIMUM_DATA_LENGTH 1023
#define ENT_SUFFIX ".ent"
#define ADDR_IMMEDIATE 0
#define ADDR_JUMP 2
#define ADDRESSING_BIT_WIDTH 2
#define ARE_BIT_WIDTH 2
#define REGISTER_BIT_WIDTH 4
#define ENTRY_SYMBOL_START ".entry"
#define ADD_OPERATION "add"
#define CLR_OPERATION "clr"
#define FALSE 0
#define WRITE "w"
#define STRING_SYMBOL_START ".string"
#define BASE_MEM_ADDR 100
#define NOT_OPERATION "not"
#define MEM_WORD_BITS 10
#define EXT_SUFFIX ".ext"
#define ENTER '\n'
#define MAX_LINE 80
#define OUTPUT_BASE 2
#define BASE2_ZERO_VALUE '.'
#define BASE2_ONE_VALUE '/'
#define ADDR_REGISTER 3
#define OPCODE_BIT_WIDTH 4
#define MAX_OP_LEN 4
#define MOV_OPERATION "mov"
#define DEC_OPERATION "dec"
#define UNK "unknown"
#define JMP_OPERATION "jmp"
#define BITS_IN_BYTE 8
#define ADDR_MEMORY 1
#define BNE_OPERATION "bne"
#define STOP_OPERATION "stop"
#define DOT '.'
#define MAXIMUM_LABEL_LENGTH 30
#define MAXIMUM_OPERATION_LENGTH 80
#define JSR_OPERATION "jsr"
#define MAXIMUM_DATA_NUMBER -1024 
#define MAX_BASE4_INT_LEN 5 
#define RED_OPERATION "red"
#define PRN_OPERATION "prn"
#define BACKSLASH_T '\t'
#define RTS_OPERATION "rts"
#define INITIAL_CAPACITY 8
#define COMMENT_CHAR ';'
#define CMP_OPERATION "cmp"
#define IMMEDIATE "immediate"
#define JUMP "jump"
#define MEMORY "memory"
#define REGISTER "register"
#define LABEL_END ':'
#define BACKSLACH_ZERO '\0'
#define LEA_OPERATION "lea"
#define INC_OPERATION "inc"
#define OPERAND_DELIM ','
#define MAZ_AMOUNT_CODE_LINES 25
#define DATA_SYMBOL_START ".data"
#define MAX_BASE4_VALUE 1023
#define BACKSLASH '\"'
#define DATA_SYMBOL_START_SEPERATOR ','
#define MINUS_CHAR '-'
#define REGISTER_MIN '0'
#define PLUS_CHAR '+'
#define IMMEDIATE_CHAR '#'
#define REGISTER_CHAR 'r'
#define REGISTER_LEN 2
#define EXTERN_SYMBOL_START ".extern"
#define MEMORY_REGISTER memory | regist
#define IMMEDIATE_MEMORY_REGISTER immediate | memory | regist
#define MEMORY_JUMP_REGISTER memory | jump | regist
#define ADDRESSING_NONE none



#endif
