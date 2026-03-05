#include <stdio.h>
#include <stdlib.h>

double Power(double base, int exponent)
{
    if (!exponent)
        return 1.0;

    if (exponent < 0)
        return 1.0 / Power(base, -exponent);

    return base * Power(base, exponent - 1);
}

int main()
{
    double b = 4.5;
    int x = 3;
    printf("%lg^%d = %lg\n", b, x, Power(b, x));

    return EXIT_SUCCESS;
}
