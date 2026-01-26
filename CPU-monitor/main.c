#include <stdio.h>
#include "cpu_utils.h"

int main()
{
    int size = 32;
    int cores[size];
    cpu_ids(cores, size);
    
    int i = 0;
    while(cores[i] != -1)
    {
        printf("%d\n", cores[i++]);
    }

    return 0;
}

            // char cpu_temp_info[64];
            // snprintf(cpu_temp_info, sizeof(cpu_temp_info), "/sys/class/hwmon/hwmon8/temp%d_label", core_id+2 % 7);
            // FILE *temp_label = fopen(cpu_temp_info, "r");
            // while(fgets(cpu_temp_info, sizeof(cpu_temp_info), temp_label))
            // {
            //     printf("%s", cpu_temp_info);
            // }
            // fclose(temp_label);
