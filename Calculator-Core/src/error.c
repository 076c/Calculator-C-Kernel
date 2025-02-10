#include "error.h"

void push_error(const char* error)
{
    int len = strlen("\t") + strlen(ERROR_PREPROCESS) + strlen(error) + 1;
    char* buffer = malloc(len);

    if (!buffer)
    {
        return;
    }
    
    /* Copy string \t into buffer and concat the string */
    
    strcpy(buffer, "\t");
    strcat(buffer, ERROR_PREPROCESS);
    strcat(buffer, "\n\n");
    strcat(buffer, error);

    buffer_push_buffer(buffer);
    free(buffer);
}