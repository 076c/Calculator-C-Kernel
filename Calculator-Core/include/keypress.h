/* This file is responsible for input/output. */

#include "libs.h"
#include "buffer.h"

const char* key_to_text(int nKey);
const char* get_last_input();
void run_on_keypress(int nKey, void* (*hooked_func)());
void run_on_keypress_once(int nKey, void* (*hooked_func)());