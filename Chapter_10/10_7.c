#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void COPY_ARRAY(const double arr[], double brr[], int n);
void SHOW_ARRAY(double (*x)[], int n);

int main(void)
{

    double a[2][3] = {{1.0, 2.0, 3.0}, {4.0, 5.0, 6.0}};
    double b[2][3] = {{0.0, 0.0, 0.0}, {0.0, 0.0, 0.0}};

    printf("The original A array is: \n");
    SHOW_ARRAY(a, 2);
    printf("The original B array is: \n");
    SHOW_ARRAY(b, 2);

    for (int i = 0; i < 2; i++)
    {
        COPY_ARRAY(a[i], b[i], 3);
    }

    printf("The copied B array is: \n");
    SHOW_ARRAY(b, 2);

    return 0;   
}

void COPY_ARRAY(const double arr[], double brr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }
}

void SHOW_ARRAY(double x[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%-5g ", x[i][j]);
        }
        putchar('\n');
    }
}
