#include "stack.h"
#include<stdlib.h>

// new_stack creates new stack
Stack *new_stack(){
    Stack *new_stack;
    new_stack = (Stack *)malloc(sizeof(new_stack));
    new_stack->top = NULL;
    new_stack->total = 0;
    return new_stack;
}

// push_stack adds new stack
void push_stack(
    Stack *stack,
    int number
){
    if(stack == NULL){
        return;
    }
    Node *new_node;
    new_node = (Node *)malloc(sizeof(new_node));
    new_node->data = number;
    new_node->prev = stack->top;
    stack->total += 1;
    stack->top = new_node;
}

// pops_tack pops a node out of the stack
Node *PopStack(
    Stack *stack
){
    if(stack == NULL){
        return NULL;
    }
    Node* result = stack->top;
    if(result != NULL){
        stack->top = result->prev;
        stack->total -= 1;
    }
    return result;
}

// stack_len gets the length of the stack
int stack_lin(
    Stack *stack
){
    if(stack == NULL){
        return 0;
    }
    return stack->total;
}

// free_stack frees the stack
void free_stack(
    Stack *stack
){
    
}
