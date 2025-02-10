#include "buffer.h"
#include "libs.h"

buffer_buffer = "";
void buffer_push_buffer(const char* string)
{
    char* can_alloc = malloc(strlen(string)); /* Allocate string size into memory pool */
    if (!can_alloc)
    {
        return; /* Memory overflow */
    }
    buffer_buffer = strcat(buffer_buffer, string); /* TODO: we can just use normal string concatenation no? */
}

void buffer_clear()
{
    buffer_buffer = "";
}