#define ERROR_DIVIDE_BY_ZERO "Cannot divide by zero."
#define ERROR_PREPROCESS "[Error]"
#define ERROR_OVERFLOW "Overflow"
#define ERROR_INVALID_VARIABLE "Non-existant variable used in formula."

#include "buffer.h"
#include "libs.h"

void push_error(const char* error);