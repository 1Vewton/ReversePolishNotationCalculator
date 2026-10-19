#ifndef STACK_H
#define STACK_H

// Node defines one node in the stack
typedef struct {
    int data;
    Node *prev;
} Node;

// Stack defines the stack
typedef struct {
    Node *top;
    int total;
} Stack;

// NewStack creates new stack
Stack *NewStack();

#endif