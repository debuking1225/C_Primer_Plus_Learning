#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define ARTICHOKE_PRICE 2.05
#define BEET_PRICE 1.15
#define CARROT_PRICE 1.09
#define DISCOUNT_RATE 0.05
#define SHIPPING_RATE1 6.5
#define SHIPPING_RATE2 14
#define SHIPPING_RATE3 0.5
#define SHIPPING_WEIGHT1 5
#define SHIPPING_WEIGHT2 20
int main(void)
{
    printf("*****************************************************************\n");
    printf("Enter the kind of vegetables you want to buy:\n");
    printf("1) Artichokes\n");
    printf("2) Beets\n");
    printf("3) Carrots\n");
    printf("4) Quit\n");
    printf("*****************************************************************\n");
    int option;
    float weight, price, total_weight = 0, total_price = 0;
    while (scanf("%d", &option) == 1)
    {
        if (option == 4)
            break;
        switch (option)
        {
        case 1:
            printf("Please enter the weight of artichokes: ");
            scanf("%f", &weight);
            price = weight * ARTICHOKE_PRICE;
            total_weight += weight;
            total_price += price;
            break;
        case 2:
            printf("Please enter the weight of beets: ");
            scanf("%f", &weight);
            price = weight * BEET_PRICE;
            total_weight += weight;
            total_price += price;
            break;
        case 3:
            printf("Please enter the weight of carrots: ");
            scanf("%f", &weight);
            price = weight * CARROT_PRICE;
            total_weight += weight;
            total_price += price;
            break;
        default:
            printf("Please enter the correct number.\n");
            break;
        }
        printf("*****************************************************************\n");
        printf("Enter the kind of vegetables you want to buy:\n");
        printf("1) Artichokes\n");
        printf("2) Beets\n");
        printf("3) Carrots\n");
        printf("4) Quit\n");
        printf("*****************************************************************\n");
    }
    printf("The total weight of vegetables is %.2f.\n", total_weight);
    printf("The total price of vegetables is %.2f.\n", total_price);
    if (total_price >= 100)
        total_price *= (1 - DISCOUNT_RATE);
    if (total_weight <= SHIPPING_WEIGHT1)
        total_price += SHIPPING_RATE1;
    else if (total_weight <= SHIPPING_WEIGHT2)
        total_price += SHIPPING_RATE2;
    else
        total_price += SHIPPING_RATE2 + (total_weight - SHIPPING_WEIGHT2) * SHIPPING_RATE3;
    printf("The total price of vegetables is %.2f.\n", total_price);
    return 0;  
}

