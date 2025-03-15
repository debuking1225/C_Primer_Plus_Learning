#include <stdio.h>
int main()
{
    printf("pleasr enter height in centimeters: ");
    float height;
    scanf("%f", &height);
    while (height >= 0)
    {
        printf("%.1f cm = %.2f feet, %.2f inches\n", height, height / 30.48, height / 2.54);
        printf("pleasr enter height in centimeters (<=0 to quit): ");
        scanf("%f", &height);
    }
}