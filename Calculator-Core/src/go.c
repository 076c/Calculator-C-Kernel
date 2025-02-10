/* go.c: Functions for calculation */

#include "go.h"
#include "libs.h"
#include "error.h"

int div(int what, int by)
{
    if (what == 0 || by == 0)
    {
        push_error(ERROR_DIVIDE_BY_ZERO); /* push error onto buffer (cannot divide by zero) */
    }

    return (what / by);
}

int add(int what, int by)
{
    return (what + by);
}

int mul(int what, int by)
{
    return (what * by);
}

int sub(int what, int by)
{
    return (what - by);
}

int rshift(int what, int by)
{
    return (what >> by);
}

int lshift(int what, int by)
{
    return (what << by);
}

int band(int what, int by)
{
    return (what & by);
}

int bor(int what, int by)
{
    return (what | by);
}

go NewGo()
{
    go Calculator;

    Calculator.add = add;
    Calculator.sub = sub;
    Calculator.mul = mul;
    Calculator.div = div;

    return Calculator;
}