#pragma once
#include "libs.h"

#define BUFFER_MAX 256

// Depending on you calculator,
// you might have to change some stuff
// and include libraries.

static char* buffer_buffer;
void buffer_push_buffer(const char* string);
void buffer_clear();
const char* buffer_get_buffer();
void buffer_remove_top();
int strlen(const char* str);
char* strcat(const char* s1, const char* s2);