#ifndef STACK_H
#define STACK_H

#include<stdbool.h>

// Node defines one node in the stack
typedef struct {
    int data;
    struct Node *prev;
} Node;

// Stack defines the stack
typedef struct {
    struct Node *top;
    int total;
} Stack;

// new_stack creates new stack
Stack *new_stack();

// push_stack pushes new node to stack
void push_stack(
    Stack *stack,
    int number
);

// pop_stack pops a node out of stack. 
// If null is returned, it means that nothing can be poped. 
Node *pop_stack(
    Stack *stack
);

// stack_len gets the length of stack
int stack_len(
    Stack *stack
);

// free_stack frees datas in the stack
void free_stack(
    Stack *stack
);

// empty checks if the stack is empty
bool empty(
    Stack *stack
);

#endif