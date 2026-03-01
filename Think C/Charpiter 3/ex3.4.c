#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double Multadd(double a, double b, double c)
{
    return a * b + c;
}

double Yikes(double x)
{
    double a = x;
    double b = exp(-x);
    double c = sqrt(1 - b);

    return Multadd(a, b, c);
}

int main(int argc, char* argv[])
{
    double const PI = acos(-1);

    printf("Test 1 (1.0, 2.0, 3.0):\n");
    double result = Multadd(1.0, 2.0, 3.0);
    printf("Multadd result: %lf\n", result);

    printf("\n");
    printf("Test 2 (Trigonometry):\n");
    double trig_result = Multadd(cos(PI / 4.0), 0.5, sin(PI / 4.0));
    printf("Trig Result: %lf\n", trig_result);

    printf("\n");
    printf("Test 3 (Yikes with x = 1.0):\n");
    double yikes_result = Yikes(1.0);
    printf("Yikes Result: %lf\n", yikes_result);

    return EXIT_SUCCESS;
}
