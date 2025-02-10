/* Stack management */

#pragma once

#include "libs.h"
#include "buffer.h"
#include "error.h"

int stack[MAX_RAM];

int get_top_index();
int get_top_value();
void push_int(int value, int index);