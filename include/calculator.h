#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "stack.h"

// CalculationTask defines a task for calculation
typedef struct {
    struct Stack *stack;
}CalculationTask;

// new_calculation_task initializes new calculation task
CalculationTask *new_calculation_task();

#endif