#include <stdio.h>
#include <stdlib.h>

int Sum_m_to_n(int m, int n)
{
    // printf("m: %d\n", m);
    // printf("n: %d\n", n);
    if (m == n)
        return n;
    else
        return m + Sum_m_to_n(m + 1, n);
}

int Multiply_n_to_m(int m, int n)
{
    // printf("m: %d\n", m);
    // printf("n: %d\n", n);
    if (m == n)
        return n;
    else
        return n * Multiply_n_to_m(m, n - 1);
}

int main()
{
    int f1 = Sum_m_to_n(3, 5);
    // printf("\n");
    int f2 = Multiply_n_to_m(1, 5);

    printf("\nf1: %d\n", f1);
    printf("f2: %d\n", f2);

    return EXIT_SUCCESS;
}
