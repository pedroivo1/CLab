#include <stdio.h>

int main() {
    float r;
    const float pi = 3.1416;
    scanf("%f", &r);

    printf("%.2f", pi*r*r);

    return 0;
}
