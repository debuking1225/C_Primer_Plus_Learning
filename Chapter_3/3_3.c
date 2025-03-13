#include <stdio.h>
int main()
{   
    float value;
    printf("Enter a floating-point value: ");
    scanf("%f", &value);
    printf("fixed-point notation: %f\n", value);
    printf("exponential notation: %e\n", value);
    printf("p notation: %a\n", value);
}