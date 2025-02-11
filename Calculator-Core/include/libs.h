#pragma once

/* C definitions */
#define MAX_RAM 456
#define ALLOW_C_FUNCTIONS false
#ifndef ALLOW_C_FUNCTIONS
#include <stdio.h>
#ifdef _WIN32
#include <windows.h>
#elif __linux__
#include <unistd.h>
#elif __APPLE__
#include <unistd.h>
#else
#include <unistd.h>
#endif
#ifdef _WIN32
#define Sleep(x) (Sleep(x))
#elif __linux__
#define Sleep(x) (usleep(x * 1000))
#elif __APPLE__
#define Sleep(x) (usleep(x * 1000))
#else
#define Sleep(x) (usleep(x * 1000))
#endif
#endif

enum Keys {
    KEY_ON, // KEY_ON: On key on the calculator.
    KEY_OFF, // KEY_OFF: Off key on calculator (able to fire using 2nd+KEY_ON).
    KEY_1, // KEY_1: Number one key on calculator.
    KEY_2, // KEY_2: Number two key on calculator.
    KEY_3, // KEY_3: Number three key on calculator.
    KEY_4, // KEY_4: Number four key on calculator.
    KEY_5, // KEY_5: Number five key on calculator.
    KEY_6, // KEY_6: Number six key on calculator.
    KEY_7, // KEY_7: Number seven key on calculator.
    KEY_8, // KEY_8: Number eight key on calculator.
    KEY_9, // KEY_9: Number nine key on calculator.
    KEY_0, // KEY_0: Number zero key on calculator.
    KEY_ADD, // KEY_ADD: Addition key on calculator.
    KEY_SUB, // KEY_SUB: Subtraction key on calculator.
    KEY_MUL, // KEY_MUL: Multiplication key on calculator.
    KEY_DIV, // KEY_DIV: Division key on calculator.
};