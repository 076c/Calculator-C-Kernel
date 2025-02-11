#include "keypress.h"

const char* key_to_text(int nKey)
{
    switch (nKey)
    {
    case KEY_ON:
        return "CALC_ON";
    case KEY_OFF:
        return "CALC_OFF";
    case KEY_0:
        return "0";
    case KEY_1:
        return "1";
    case KEY_2:
        return "2";
    case KEY_3:
        return "3";
    case KEY_4:
        return "4";
    case KEY_5:
        return "5";
    case KEY_6:
        return "6";
    case KEY_7:
        return "7";
    case KEY_8:
        return "8";
    case KEY_9:
        return "9";
    case KEY_ADD:
        return "+";
    case KEY_SUB:
        return "-";
    case KEY_MUL:
        return "*";
    case KEY_DIV:
        return "/";
    default:
        return "UNRECOGNIZED_KEY";
    }
}

const char* get_last_input()
{
    char last_input = buffer_get_buffer()[strlen(buffer_get_buffer())];

    return &last_input;
}

void virtual_input_key(int nKey)
{
    const char* text = key_to_text(nKey);
    buffer_push_buffer(text);
}

void run_on_keypress(int nKey, void* (*hooked_func)())
{
    while (1)
    {
        if (get_last_input() == key_to_text(nKey))
        {
            hooked_func();
            buffer_remove_top();
        }
    }
}

void run_on_keypress_once(int nKey, void* (*hooked_func)())
{
    while (1)
    {
        if (get_last_input() == key_to_text(nKey))
        {
            hooked_func();
            buffer_remove_top();
            break;
        }
    }
}