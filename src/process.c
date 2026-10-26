#include<stdlib.h>
#include "process_string.h"
#include "error_code.h"

// process_single_character process a single char
ProcessResult process_single_character(
    char single
){
    ProcessResult result;
    if(single >= '0' && single <= '9'){
        result.integer_data = single - '0';
    }else{
        switch(single){
            case '+':
                result.operation = PLUS;
                break;
            case '-':
                result.operation = MINUS;
                break;
            case '*':
                result.operation = MULT;
                break;
            case '/':
                result.operation = DIV;
                break;
            default:
                Error *error;
                error = (Error *)malloc(sizeof(error));
                error->error_reason = sprintf(
                    "%s operation does not exists",
                    single
                );
        }
    }
    return result;
}
