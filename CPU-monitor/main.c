#include <stdio.h>

int main()
{
    FILE *fptr = fopen("/proc/cpuinfo", "r");

    char buff[256];
    while (fgets(buff, sizeof(buff), fptr))
    {
        printf("%s", buff);
    }

    fclose(fptr);
    return 0;
}
