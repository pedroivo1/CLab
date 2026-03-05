#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digit a number(0-9): ");
    char c = getchar();

    if (!(c >= '0' && c <= '9'))
    {
        printf("Digit a number.\n");
        return EXIT_SUCCESS;
    }

    printf("You digited: %c\n", c);

    return EXIT_SUCCESS;
}
