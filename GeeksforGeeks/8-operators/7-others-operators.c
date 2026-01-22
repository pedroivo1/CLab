#include <stdio.h>

int main()
{
    int num = 10;
    int* add_of_num = &num;

    printf("sizeof(num) = %zu bytes\n", sizeof(num));
    printf("&num = %p\n", &num);
    printf("*add_of_num = %p\n", *add_of_num);
    printf("(10 < 5) ? 10 : 20 = %d\n", (10 < 5) ? 10 : 20);
    printf("(float)num = %f\n", (float)num);

    return 0;
}
