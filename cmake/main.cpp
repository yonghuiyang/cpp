#include <stdio.h>
#include <stdlib.h>
#include "math/math_functions.h"

int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        printf("Usage: %s base exp \n", argv[0]);
    }

    double base = atof(argv[1]);
    int exp = atoi(argv[2]);
    double res = power(base, exp);
    printf("%g ^ %d is %g\n", base, exp, res);
    return 0;
}

