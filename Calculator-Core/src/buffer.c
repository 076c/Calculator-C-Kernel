#include "buffer.h"
#include "libs.h"

int strlen(const char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

char* strcat(const char* s1, const char* s2)
{
    char* d;
    while (*s1)
    {
        *d = *s1;
        d++;
        s1++;
    }

    while (*s2)
    {
        *d = *s2;
        d++;
        s2++;
    }

    *d = '\0';
    return d;
}

static char* buffer_buffer = "";
void buffer_push_buffer(const char* string)
{
    // char* can_alloc = strlen(string) >= BUFFER_MAX;
    // if (!can_alloc)
    // {
    //     return; /* Memory overflow */
    // }
    buffer_buffer = strcat(buffer_buffer, string); /* TODO: we can just use normal string concatenation no? */
}

void buffer_clear()
{
    buffer_buffer = "";
}

const char* buffer_get_buffer()
{
    // malloc(strlen(buffer_buffer)); /* TODO: useless malloc? */
    return buffer_buffer;
}

void buffer_remove_top()
{
    buffer_buffer[strlen(buffer_buffer) - 1] = '\0';
}