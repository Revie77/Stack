//
// Created by ZZZYYY on 2022/11/15.
//
#include<stdio.h>
#include <malloc.h>

#ifndef STACK_STACK_H
#define STACK_STACK_H
#define MAXSIZE 100
typedef int DataType;

typedef struct stackNode {
	DataType data;
	struct stackNode* next;
} LinkNode;

typedef struct Stack {
	LinkNode* head;
} Stack;

//初始化链栈
LinkNode* initLinkStack(Stack* S);

//判断栈空
int emptyStack(Stack* S);

//推栈
void pushStack(Stack* S, DataType data);

//出栈
void popStack(Stack* S);

//取栈顶元素
int getTop(Stack* S, DataType* data);

//显示栈中元素
void showStack(Stack* S);

#endif //STACK_STACK_H
