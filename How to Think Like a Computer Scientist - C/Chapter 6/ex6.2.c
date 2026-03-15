#include <stdio.h>
#include <stdlib.h>

double Power(double base, int exponent)
{
    double val = 1;
    while (exponent > 0) {
        val *= base;
        --exponent;
    }

    while (exponent < 0) {
        val /= base;
        ++exponent;
    }

    return val;
}

int main()
{
    double b = 4.5;
    int x = 3;
    printf("%lg^%d = %lg\n", b, x, Power(b, x));

    return EXIT_SUCCESS;
}
