#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define LEN 5

void copy_arr(double x[], const double source[], int n);
void copy_ptr(double *x, const double *source, int n);
void copy_ptrs(double *x, const double *source, const double *end);
void show_arr(const double x[], int n);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    printf("source array:\n");
    show_arr(source, LEN);

    copy_arr(target1, source, LEN);
    printf("target1 array:\n");
    show_arr(target1, LEN);

    copy_ptr(target2, source, LEN);
    printf("target2 array:\n");
    show_arr(target2, LEN);

    copy_ptrs(target3, source, source + LEN);
    printf("target3 array:\n");
    show_arr(target3, LEN);

    printf("Done.\n");

    return 0;   
}

void show_arr(const double x[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%-5g ", x[i]);
    }
    printf("\n");
}

void copy_arr(double x[], const double source[], int n)
{
    for(int i = 0; i < n; i++)
    {
        x[i] = source[i];
    }
}

void copy_ptr(double *x, const double *source, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(x + i) = *(source + i);
    }
}

void copy_ptrs(double *x, const double *source, const double *end)
{
    for (int i = 0; i < end - source; i++)
    {
        *(x + i) = *(source + i);
    }
}