#include <stdio.h>
#include <stdlib.h>

void Ping()
{
    printf(".\n");
}

void Baffle()
{
    printf("wug");
    Ping();
}

void Zoop()
{
    Baffle();
    printf("You wugga ");
    Baffle();
}

void Zool(int val, char c1, char c2)
{
    printf("%d %c %c\n", val, c1, c2);
}

int main(void)
{
    printf("No, I ");
    Zoop();
    printf("I ");
    Baffle();
    Zool(11, 'a', 'b');
    return EXIT_SUCCESS;
}
