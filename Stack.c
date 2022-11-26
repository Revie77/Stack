#include "Stack.h"

//#include<stdio.h>

LinkNode* initLinkStack(Stack* S) {
	S->head = NULL;
	return S->head;
}

int emptyStack(Stack* S) {
	if (NULL == S->head) {
		return 1;
	}
	return 0;
}

void pushStack(Stack* S, DataType data) {
	LinkNode* L = (LinkNode*)malloc(sizeof(LinkNode));
	L->data = data;
	L->next = S->head;
	S->head = L;
}

void popStack(Stack* S) {
	LinkNode* L = (LinkNode*)malloc(sizeof(LinkNode));
	L = S->head;
	S->head = S->head->next;
}

int getTop(Stack* S, DataType* data) {
	if (!emptyStack(S)) {
		*data = S->head->data;
		return *data;
	}
	else {
		printf("empty Stack!!!\n");
		*data = 0;
		return *data;
	}
}

void showStack(Stack* S) {
	LinkNode* L = (LinkNode*)malloc(sizeof(LinkNode));
	if (!emptyStack(S)) {
		while (NULL != S->head) {
			L->data = S->head->data;
			S->head = S->head->next;
			printf("%d ", L->data);
		}
	}
	else {
		printf("栈空");
	}
}