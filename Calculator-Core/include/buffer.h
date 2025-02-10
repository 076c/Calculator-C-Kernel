#pragma once
#include "libs.h"

// Depending on you calculator,
// you might have to change some stuff
// and include libraries.

const char* buffer_buffer;
void buffer_push_buffer(const char* string);
void buffer_clear();
const char* buffer_get_buffer();