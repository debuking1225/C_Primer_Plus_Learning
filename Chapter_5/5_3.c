#include <stdio.h>
int main()
{
    printf("please enter the number of days you want to convert to weeks and days: ");
    int days;
    scanf("%d", &days);
    while (days > 0)
    {
        printf("%d days are %d weeks, %d days\n", days, days / 7, days % 7);
        printf("please enter the number of days you want to convert to weeks and days: ");
        scanf("%d", &days);
    }
}