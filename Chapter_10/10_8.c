#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN1 7
#define LEN2 3

void COPY_ARRAY(double arr1[], const double arr2[], int n);
void SHOW_ARRAY(const double arr[], int n);

int main(void)
{
    double original_array[LEN1] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    double copied_array[LEN2];

    printf("The original array is:\n");
    SHOW_ARRAY(original_array, LEN1);

    COPY_ARRAY(copied_array, original_array + 2, LEN2);

    printf("The new array after copy from index 3 to index 5 is:\n");
    SHOW_ARRAY(copied_array, LEN2);


}

void COPY_ARRAY(double arr1[], const double arr2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr1[i] = arr2[i];
    }
}

void SHOW_ARRAY(const double arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%-5g", arr[i]);
    }
    putchar('\n');
}
