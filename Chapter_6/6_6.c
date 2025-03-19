#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int cube(int num)
{
    return num * num * num;
}
int square(int num)
{
    return num * num;
}
int main(void)
{
    printf("please enter the upper limit and the lower limit of the range: ");
    int lower_limit, upper_limit;
    scanf("%d %d", &lower_limit, &upper_limit);
    for (int i = lower_limit; i <= upper_limit; i++)
    {
        printf("12%d 12%d 12%d\n", i, square(i), cube(i));
    }
    return 0;   
}
