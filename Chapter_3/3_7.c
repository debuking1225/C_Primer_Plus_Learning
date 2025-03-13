#include <stdio.h>
int main()
{
    int cups;
    printf("Enter the number of cups: ");
    scanf("%d", &cups);
    printf("The equivalent volume in pints is %f\n", cups / 2.0);
    printf("The equivalent volume in ounces is %f\n", cups * 8.0);  
    printf("The equivalent volume in tablespoons is %f\n", cups * 8.0 * 2.0);
    printf("The equivalent volume in teaspoons is %f\n", cups * 8.0 * 2.0 * 3.0);
    return 0;
}