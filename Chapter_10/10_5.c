#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

double SHOW_DIFFER_ARRAY(const double a[], int n);
void SHOW_ARRAY(const double a[], int n);

int main(void)
{
    printf("please enter the length of the array: ");
    int N;
    scanf("%d", &N);
    double array[N];
    printf("please enter the array: ");
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &array[i]);
    }
    SHOW_ARRAY(array, N);
    printf("The difference between the maximum and minimum values of the array is %.2f.\n", SHOW_DIFFER_ARRAY(array, N));
    return 0;   
}

double SHOW_DIFFER_ARRAY(const double a[], int n)
{
    double max_value = a[0];
    double min_value = a[0];
    for (int i = 1; i < n; i++)
    {
        max_value = max_value < a[i] ? a[i] : max_value;
        min_value = min_value > a[i] ? a[i] : min_value;
    }
    return max_value - min_value;

}

void SHOW_ARRAY(const double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-5g", a[i]);
    }
    putchar('\n');
}