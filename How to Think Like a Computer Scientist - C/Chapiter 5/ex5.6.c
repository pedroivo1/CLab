#include <stdio.h>
#include <math.h>

void Distance(double x1, double y1, double x2, double y2) {
    double d =  sqrt(SumSquares(x2 - x1, y2 - y1));
    printf("Distance: %f\n", d);
}
