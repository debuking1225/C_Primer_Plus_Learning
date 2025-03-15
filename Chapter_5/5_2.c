#include <stdio.h>
int main()
{
    printf("please enter a number:\n");
    int number = 0;
    scanf("%d", &number);
    int number_end = number + 10;
    while(number < number_end)
    {
        printf("%d ", number);
        number++;
    }
}