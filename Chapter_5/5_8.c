#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
int main()
{
    printf("this program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    int second_operand; 
    scanf("%d", &second_operand);
    printf("Now enter the first operand: ");
    int first_operand;
    scanf("%d", &first_operand);
    while (first_operand > 0)
    {
        printf("%d %% %d is %d\n", first_operand, second_operand, first_operand % second_operand);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d", &first_operand);
    }
}