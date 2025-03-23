#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int find_max(const int a[], int n);
void show_array(const int a[], int n);

int main(void)
{
    int max;
    int N;
    printf("Please input the size of the Array:\n");
    scanf("%d", &N);
    int array[N];
    printf("please input an Array:\n");
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    show_array(array, N);
    max = find_max(array, N);
    printf("The max number is %d\n", max);

    return 0;   
}

int find_max(const int a[], int n)
{
    int maxv = a[0];
    for (int i = 1; i < n; i++)
    {
        maxv = maxv < a[i] ? a[i] : maxv;
    }
    return maxv;
}

void show_array(const int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-3d ", a[i]);
    }
    putchar('\n');
}
