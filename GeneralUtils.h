#ifndef GENERAL_UTILS_H
#define GENERAL_UTILS_H

#include <stdlib.h>
#include <stdarg.h>

#include "FileContextDefenition.h"

/*
	remove all spaces
*/
char* trimString(char* str);

/*
	trying get label
*/
int tryGetLabel(Line line, char label[MAXIMUM_LABEL_LENGTH + 1]);

/*
	is line start with condition
*/
int getIsLineStartsWithOpCondition(char *line, int i);

/*
	init the op struct
*/
void initOp(char *line, char* op);

/*
	returns TRUE if the line strats with Op
*/
int isLineStartsWithOp(char* line, int* operationIndex);

/*
	check if the line starts with condition
*/
int getIsLineStartsWithOpCondition(char *line, int i);


/*
	check if the line end with backslash t
*/
int checkLineEndBackslashT(char *line);

/*
	check if the source and the destination are regist
*/
int isOpSourceAndDestAreRegist(Op *op);

/*
	returning the address and name
*/
char* getAddressNameFromAddress(Addressing addr);

/*
	calculating the binary operation size
*/
int calcOperationBinarySize(Op* op);

/*
	adding the locatino to Extern
*/
void addLocationToExtern(Extern* ext, int location);

/*
	creating operation
*/
int createOperation(Line line, FileContext* FileContext, int operationIndex, Op* generated);

/*
	return address type
*/
int getAddressType(Addressing method);

/*
	reversing string
*/
void reverseString(char* str);
#endif
