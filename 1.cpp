////
//// Created by ZZZYYY on 2022/11/15.
////
//typedef struct Node
//{
//    int data;
//    struct Node *next;
//} Node;
//
//typedef struct Stack
//{
//    Node *head;
//} Stack;
//
//Stack *stackCreate()
//{
//    Stack *s = (Stack *)malloc(sizeof (Stack));
//    Node *n = (Node *)malloc(sizeof (Node));
//
//    n->next = nullptr;
//    s->head = n;
//
//    return s;
//}
//
//void stackPush(Stack *s, int data)
//{
//    Node *n = (Node *)malloc(sizeof (Node));
//    n->data = data;
//    n->next = s->head;
//    s->head = n;
//}
//
//void stackPop(Stack *s)
//{
//    Node *n = s->head;
//    if (nullptr == n)
//    {
//        return;
//    }
//
//    s->head = n->next;
//
//    free(n);
//    n = nullptr;
//}