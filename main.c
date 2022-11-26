#include "Stack.h"

//#include<stdio.h>
//Decimal to binary conversion
int convertBinary(LinkNode* S, DataType x) {
	int residue = 0;
	do {
		residue = x % 2;
		x = x / 2;
		pushStack(S, residue);
	} while (x );
	pushStack(S, x);
}

int main() {
	Stack* S = (Stack*)malloc(sizeof(LinkNode));
	initLinkStack(S);
	convertBinary(S, 121);
	showStack(S);

	return 0;
}