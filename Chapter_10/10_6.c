#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void REVERSE_ARRAY(double arr[], int n);
void SHOW_ARRAY(const double arr[], int n);

int main(void)
{
    printf("Please enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    double arr[n];
    printf("Please enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
    }
    printf("The original array is: ");
    SHOW_ARRAY(arr, n);
    REVERSE_ARRAY(arr, n);
    printf("The reversed array is: ");
    SHOW_ARRAY(arr, n);

    return 0;   
}

void REVERSE_ARRAY(double arr[], int n)
{
    double temp;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void SHOW_ARRAY(const double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-5g ", arr[i]);
    }
    putchar('\n');
}
