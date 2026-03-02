#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0

short IsHoopy(int x)
{
    short hoopyFlag;
    if (x % 2 == 0)
        hoopyFlag = TRUE;
    else
        hoopyFlag = FALSE;
    return hoopyFlag;
}

short IsFrabjuous(int x)
{
    short frabjuousFlag;
    if (x > 0)
        frabjuousFlag = TRUE;
    else
        frabjuousFlag = FALSE;
    return frabjuousFlag;
}

int main(void)
{
    short flag1 = IsHoopy(202);
    short flag2 = IsFrabjuous(202);
    printf("%i\n", flag1);
    printf("%i\n", flag2);
    if (flag1 && flag2)
        printf("ping!\n");
    if (flag1 || flag2)
        printf("pong!\n");
    return EXIT_SUCCESS;
}
