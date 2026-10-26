#ifndef PROCESS_STRING_H
#define PROCESS_STRING_H

#include "error_code.h"

// Operation defines the operations of +-*/
typedef enum {
    PLUS,
    MINUS,
    MULT,
    DIV,
}Operation;

// ProcessResult defines the result of process
typedef struct {
    Operation *operation;
    int *integer_data;
    struct Error *err;
}ProcessResult;

// process_single_character process a single char
ProcessResult process_single_character(
    char single
);

#endif