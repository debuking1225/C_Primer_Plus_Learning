#include <stdio.h>
void temperature(double fahrenheit)
{
    const double fahrenheit_to_celsius = 5.0 / 9.0;
    const double celsius_to_kelvin = 273.16;
    double celsius, kelvin;
    celsius = fahrenheit_to_celsius * (fahrenheit - 32.0);
    kelvin = celsius + celsius_to_kelvin;
    printf("%.2f Fahrenheit is %.2f Celsius and %.2f Kelvin.\n", fahrenheit, celsius, kelvin);
}
int main(void)
{
    double fahrenheit;
    printf("Enter a Fahrenheit temperature: ");
    while (scanf("%lf", &fahrenheit) == 1)
    {
        temperature(fahrenheit);
        printf("Enter another Fahrenheit temperature (q to quit): ");
    }
    return 0;
}
