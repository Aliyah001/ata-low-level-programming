include "sum_all.h"
#include <stdarg.h>


int sum_all(int count, ...)
{
     va_list args;
    int sum = 0;
    int i;
    va_start(args, count);
    for (i = 0; i < count; i++)
    {


        sum += va_arg(args, int);
    }


    va_end(args);

    return sum;
}


