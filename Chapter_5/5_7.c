#include <stdio.h>
double triple(double number)
{
    return number * number * number;
}
int main()
{
    printf("please enter a number: ");
    double number;
    scanf("%lf", &number);
    printf("The triple of %.2f is %.2f\n", number, triple(number));
    return 0;
}