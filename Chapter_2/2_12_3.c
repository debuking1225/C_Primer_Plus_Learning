#include <stdio.h>
int main()
{
    int DAY;
    int AGE;
    printf("please input your age\n");
    scanf("%d", &AGE);
    DAY = AGE * 365;
    printf("You have lived %d days\n", DAY);
    return 0;
}