#include "stack.h"
#include<stdlib.h>

// NewStack creates new stack
Stack *NewStack(){
    Stack *newStack;
    newStack = (Stack *)malloc(sizeof(newStack));
    newStack->top = NULL;
    newStack->total = 0;
    return newStack;
}
