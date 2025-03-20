#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    printf("please input a series of numbers, end with 0:\n");
    int num = 0;
    int even_count = 0;
    int even_sum = 0;
    int odd_count = 0;
    int odd_sum = 0;
    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (num % 2 == 0)
        {
            even_count++;
            even_sum += num;
        }
        else
        {
            odd_count++;
            odd_sum += num;
        }
    }
    printf("even_count: %d, even_sum: %d\n", even_count, even_sum);
    printf("odd_count: %d, odd_sum: %d\n", odd_count, odd_sum);
    return 0;   
}
