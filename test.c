#include "pathStack.h"

int main() {
    pathStack_t stack;
    initStack(&stack);

    printf("初始路径（应为 /）:\n");
    printStack(&stack);
    
    printf("\ngetStackTop:\n"); 
    getStackTop(&stack);     

    /* printf("\npushStack(\"home\"):\n"); */
    /* pushStack(&stack, "home"); */
    /* printStack(&stack); */

    /* printf("\npushStack(\"user\"):\n"); */
    /* pushStack(&stack, "user"); */
    /* printStack(&stack); */

    /* printf("\ngetStackTop:\n"); */
    /* getStackTop(&stack); */


    /* printf("\npushStack(\"documents\"):\n"); */
    /* pushStack(&stack, "documents"); */
    /* printStack(&stack); */

    /* printf("\npopStack() -- cd ..:\n"); */
    /* popStack(&stack); */
    /* printStack(&stack); */

    /* printf("\npushStack(\"projects\"):\n"); */
    /* pushStack(&stack, "projects"); */
    /* printStack(&stack); */

    /* printf("\npopStack() twice -- cd .. cd ..:\n"); */
    /* popStack(&stack); */
    /* popStack(&stack); */
    /* printStack(&stack); */

    /* printf("\npopStack() until empty:\n"); */
    /* popStack(&stack); */
    /* popStack(&stack);  // 再次pop不会崩溃 */
    /* printStack(&stack); */

    return 0;
}

