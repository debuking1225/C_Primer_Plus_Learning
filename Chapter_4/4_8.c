#include <stdio.h>
#define GALLON_TO_LITER 3.785
#define MILE_TO_KM 1.609
int main()
{
    printf("please enter the number of miles you have driven and the number of gallons of gasoline you have used:\n");
    float miles, gallons;   
    scanf("%f %f", &miles, &gallons);
    printf("The miles-per-gallon value is: %.1f\n", miles / gallons);
    printf("The liters-per-100-km value is: %.1f\n", (gallons * GALLON_TO_LITER) / (miles * MILE_TO_KM) * 100);
    return 0;
}