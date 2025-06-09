#include "pathStack.h"

int initStack(pathStack_t *stack){
    stack->top = NULL;
    return 0;
}

int pushStack(pathStack_t *stack,const char *path){
    pathNode_t *newNode = (pathNode_t *)malloc(sizeof(pathNode_t));
    // 
    size_t i = 0;
    while (path[i] != '\0' && i < sizeof(newNode->path) - 1) {
        newNode->path[i] = path[i];
        i++;
    }
    newNode->path[i] = '\0';  // 加上终止符

    newNode->next = stack->top;
    stack->top = newNode;
    return 0;
}

int popStack(pathStack_t *stack){
    if(stack->top != NULL){
        pathNode_t *curr = stack->top;
        stack->top = stack->top->next;
        free(curr);
    }
    return 0;
}

int getStackTop(pathStack_t *stack){
    if(stack->top == NULL){
        printf("/\n");
        return -1;
    }
    printf("%s\n",stack->top->path);
    return 0;
}
// 递归找到最下层结点
int stackRecursive(pathNode_t *node) {
    if (node == NULL)
        return 0;
    stackRecursive(node->next);
    printf("/%s", node->path);
    return 0;
}

int printStack(pathStack_t *stack){
    if(stack->top == NULL){
        printf("/\n");
        return 0;
    }

    stackRecursive(stack->top);
    printf("\n");
    return 0;
}
