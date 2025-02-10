/* go.h: Functions for calculation */

struct go {
    /* Basic functions */
    int div(int what, int by);
    int mul(int what, int by);
    int sub(int what, int by);
    int add(int what, int by);

    /* Bit operations */

    int rshift(int what, int by);
    int lshift(int what, int by);
    int band(int what, int by);
    int bor(int what, int by);

    /* Utility functions (WIP) */
};

typedef struct go go;

go NewGo();