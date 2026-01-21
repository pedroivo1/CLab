#include <stdio.h>

int main()
{
    int number = 10;
    printf("Initial value: %d\n", number);

    number = 25;
    printf("Updated value: %d\n", number);

    number = number + 5;
    printf("After adding 5: %d\n", number);

    return 0;
}