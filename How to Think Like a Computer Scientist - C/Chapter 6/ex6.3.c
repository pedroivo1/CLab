#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double SquareRoot(double a) {
    double x0 = 0;
    double x1 = a/2;

    while (fabs(x1 - x0) >= 0.0001) {
        x0 = x1;
        x1 = (x0 + a/x0)/2;
    }
    return x1;
}

int main()
{
    double a = 4;
    printf("sqrt(%g) = %g", a, SquareRoot(a));
    return EXIT_SUCCESS;
}
