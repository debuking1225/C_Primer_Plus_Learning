#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    int num_friends = 5;
    int week = 1;
    do
    {
        num_friends -= week;
        num_friends *= 2;
        week++;
        printf("At the end of week %d, Chuckie has %d friends.\n", week, num_friends);
    } while (num_friends < 150);
    printf("Chuckie has more than 150 friends at the end of week %d.\n", week);
    
    return 0;   
}
