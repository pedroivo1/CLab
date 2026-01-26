#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cpu_utils.h"

void cpu_info(int *cores, int size)
{
    FILE *cpu_info = fopen("/proc/cpuinfo", "r");
    if (cpu_info == NULL) return;

    char buff[256];
    int i = 0;
    while(fgets(buff, sizeof(buff), cpu_info) && i < size - 1)
    {
        printf("%s", buff);
    }
    fclose(cpu_info);
}

void cpu_ids(int *cores, int size)
{
    FILE *cpu_info = fopen("/proc/cpuinfo", "r");
    if (cpu_info == NULL) return;

    char buff[256];
    int i = 0;
    while(fgets(buff, sizeof(buff), cpu_info) && i < size - 1)
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

    fclose(cpu_info);
}
