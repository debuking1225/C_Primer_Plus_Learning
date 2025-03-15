#include <stdio.h>
#define minuts_per_hour 60
int main()
{
    while (1)
    {
        int minuts;
        printf("Please enter the number of minutes you want to convert to hours and minutes:\n");
        scanf("%d", &minuts);
        if (minuts <= 0)
        {
            printf("The number of minutes must be greater than 0.\n");
            continue;
        }
        printf("%d minutes is %d hours and %d minutes.\n", minuts, minuts / minuts_per_hour, minuts % minuts_per_hour);
    }
}
    