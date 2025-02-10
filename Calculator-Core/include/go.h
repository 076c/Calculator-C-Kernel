/* go.h: Functions for calculation */

struct go {
    /* Basic functions */
    int (*div)(int, int);
    int (*mul)(int, int);
    int (*sub)(int, int);
    int (*add)(int, int);

    /* Bit operations */

    int (*rshift)(int what, int by);
    int (*lshift)(int what, int by);
    int (*band)(int what, int by);
    int (*bor)(int what, int by);

    /* Utility functions (WIP) */
};

typedef struct go go;

go NewGo();