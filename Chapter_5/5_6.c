#include <stdio.h>
int main()
{
    int num, i, sum = 0;
    printf("please enter the days you want to count: ");
    scanf("%d",&num);
    for(i = 1; i <= num; i++)
    {
        sum += i * i;
        printf("%d day(s) passed, the sum is %d\n", i, sum);
    }
}