#ifndef __PATH_STACK__
#define __PATH_STACK__
#include <my_header.h>
typedef struct pathNode_s{
    char path[1024];// 存储路径长度
    struct pathNode_s *next;
}pathNode_t;
typedef struct pathStack_s{
    pathNode_t *top;// 栈顶指针
}pathStack_t;

// 相关函数
int initStack(pathStack_t *stack);

int pushStack(pathStack_t *stack,const char *path);

int popStack(pathStack_t *stack);

int getStackTop(pathStack_t *stack);

int printStack(pathStack_t *stack);
#endif

