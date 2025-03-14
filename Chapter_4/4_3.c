#include <stdio.h>
int main()
{
    float A;
    printf("Enter a floating-point value: ");
    scanf("%f", &A);
    printf("fixed-point notation: %f\n", A);
    printf("%e\n", A);
}