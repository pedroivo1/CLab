#include <stdio.h>

int main()
{
    int age = 20;
    float height = 5.7;
    double pi = 3.14159;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Pi: %.5lf\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}