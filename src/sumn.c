#include "sumn.h"
#include <assert.h>
#include <stdio.h>

int sumn(int n)
{
    /* pre-condition */
    assert(n >= 1);

    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (2 * n - 1) + sumn(n - 1);
    }
}