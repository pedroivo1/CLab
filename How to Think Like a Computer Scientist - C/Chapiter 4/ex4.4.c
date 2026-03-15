#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void check_fermat(int a, int b, int c, int n)
{
    int fermat_wrong = pow(a, n) + pow(b, n) == pow(c, n) && n > 2;
    if (fermat_wrong)
    {
        printf("Holy smokes, Fermat was wrong!");
        return;
    }

    printf("No, that doesn`t work.\n");
}

int main()
{
    check_fermat(3, 4, 5, 2);
    return EXIT_SUCCESS;
}
