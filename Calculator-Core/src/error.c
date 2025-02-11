#include "error.h"
#include "buffer.h"

void push_error(const char* error)
{
    int len = strlen("\t") + strlen(ERROR_PREPROCESS) + strlen(error) + 1;
    char* buffer;

    if (!buffer)
    {
        return;
    }
    
    /* Copy string \t into buffer and concat the string */
    
    /*strcpy(buffer, "\t");
    strcat(buffer, ERROR_PREPROCESS);
    strcat(buffer, "\n\n");
    strcat(buffer, error);

    buffer_push_buffer(buffer);
    free(buffer);*/

    // Method 2:
    buffer_push_buffer("\t");
    buffer_push_buffer(ERROR_PREPROCESS);
    buffer_push_buffer("\n\n");
    buffer_push_buffer(error);
}