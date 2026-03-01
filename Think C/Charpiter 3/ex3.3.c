#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    FMT_DEFAULT,
    FMT_US,
    FMT_ISO
} Date_fmt;

void print_date(int day, int month, int year, Date_fmt format)
{
    switch (format)
    {
        default:
        case FMT_DEFAULT:
            printf("%02d/%02d/%04d\n", day, month, year);
            break;
        case FMT_US:
            printf("%02d/%02d/%04d\n", month, day, year);
            break;
        case FMT_ISO:
            printf("%04d/%02d/%02d\n", year, month, day);
            break;
    }
}

int main()
{
    int day = 28;
    int month = 2;
    int year = 2026;

    printf("American format: ");
    print_date(day, month, year, FMT_US);
    printf("European format: ");
    print_date(day, month, year, FMT_DEFAULT);
    printf("ISO format: ");
    print_date(day, month, year, FMT_ISO);

    return EXIT_SUCCESS;
}
