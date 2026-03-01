#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

    int s_in_a_day = 24 * 3600;

    int s = 30;
    int min = 12;
    int h = 15;

    int s_passed = (h * 3600) + (min * 60) + s;
    int s_last = s_in_a_day - s_passed;

    printf("Passed: %d\n", s_passed);
    printf("Last: %d\n", s_last);

    int perc = s_passed * 100 / s_in_a_day;
    printf("%d%%\n\n", perc);

    return EXIT_SUCCESS;
}
