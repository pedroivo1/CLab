#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cpu_utils.h"

void cpu_info()
{
    const char *path = "/proc/cpuinfo";
    FILE *fptr = fopen(path, "r");
    if (fptr == NULL)
    {
        printf("File not found: %s", path);
        exit(1);
    }

    char buff[256];
    while(fgets(buff, sizeof(buff), fptr))
    {
        printf("%s", buff);
    }
    fclose(fptr);
}

void cpu_ids(int *cores, int size)
{
    const char *path = "/proc/cpuinfo";
    FILE *fptr = fopen(path, "r");
    if (fptr == NULL)
    {
        printf("File not found: %s", path);
        exit(1);
}

    char buff[256];
    int i = 0;
    while(fgets(buff, sizeof(buff), fptr) && i < size - 1)
    {
        int match = strncmp(buff, "processor", 9);
        if(match == 0)
        {
            char *c_id = strstr(buff, ":");
            if(c_id)
            {
                int core_id = atoi(c_id+1);
                cores[i++] = core_id;
            }
        }
    }
    cores[i] = -1;

    fclose(fptr);
}
