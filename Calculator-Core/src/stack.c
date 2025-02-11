#include "stack.h"

void push_int(int value, int index)
{
    if (index >= MAX_RAM)
    {
        push_error(ERROR_OVERFLOW);
    }
    stack[index] = value;
}

int get_top_index()
{
    return sizeof(stack);
}

int get_top_value()
{
    return stack[get_top_index()];
}

int set_top(int value)
{
    stack[get_top_index()] = value;
}

void stack_clear()
{
    for (int i = 0; i < get_top_index(); i++)
    {
        stack[i] = 0;
    }
}