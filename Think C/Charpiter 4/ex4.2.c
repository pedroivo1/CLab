#include <stdio.h>
#include <stdlib.h>

void bottles_of_beer_music(int start)
{
    if (!start)
    {
        printf("No bottles of beer on the wall, no bottles of beer, ya’ can’t "
               "take one down, ya’ can’t pass it around, ’cause there are no "
               "more bottles of beer on the wall!\n");
        return;
    }

    printf("%d bottles of beer on the wall, %d bottles of beer, ya’ take one "
           "down, ya’ pass it around, %d bottles of beer on the wall.\n",
           start,
           start,
           start - 1);
    bottles_of_beer_music(start - 1);
}

int main()
{
    bottles_of_beer_music(99);
    return EXIT_SUCCESS;
}
