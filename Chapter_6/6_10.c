#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    printf("Enter lower and upper integer limits: ");
    int lower_limit, upper_limit;
    scanf("%d %d", &lower_limit, &upper_limit);
    while (lower_limit < upper_limit)
    {
        int sum = 0;
        for (int i = lower_limit; i <= upper_limit; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n", lower_limit * lower_limit, upper_limit * upper_limit, sum);
        printf("Enter next set of limits: ");
        scanf("%d %d", &lower_limit, &upper_limit);
    }
    printf("Done\n");
    return 0;   
}
