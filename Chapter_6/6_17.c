#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    int years;
    double lucky_money = 1000000.0;
    for (years = 0; lucky_money > 0; years++)
    {
        lucky_money += lucky_money * 0.08;
        lucky_money -= 100000.0;
    }
    printf("After %d years, Chuckie lucky will use up all his money in his bank account\n", years);
    return 0;   
}
