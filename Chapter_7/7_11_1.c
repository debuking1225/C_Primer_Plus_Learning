#include <stdio.h>

#define ARTICHOKE_PRICE 2.05
#define BEET_PRICE 1.15
#define CARROT_PRICE 1.09
#define DISCOUNT_THRESHOLD 100.0
#define DISCOUNT_RATE 0.05
#define SHIPPING_COST_5 6.5
#define SHIPPING_COST_20 14.0
#define EXTRA_SHIPPING_COST 0.5

int main() {
    char choice = '\0';
    double artichoke_weight = 0.0, beet_weight = 0.0, carrot_weight = 0.0;
    double total_weight, total_cost, discount = 0.0, shipping_cost, grand_total;

    printf("Welcome to ABC Grocery Store!\n");
    printf("a) Artichokes ($%.2f/lb)\n", ARTICHOKE_PRICE);
    printf("b) Beets ($%.2f/lb)\n", BEET_PRICE);
    printf("c) Carrots ($%.2f/lb)\n", CARROT_PRICE);
    printf("q) Quit\n");

    while (1) {
        printf("Enter your choice (a/b/c/q): ");
        scanf(" %c", &choice);

        if (choice == 'q') {
            break;
        }

        double weight;
        switch (choice) {
            case 'a':
                printf("Enter the weight of artichokes (lbs): ");
                scanf("%lf", &weight);
                artichoke_weight += weight;
                break;
            case 'b':
                printf("Enter the weight of beets (lbs): ");
                scanf("%lf", &weight);
                beet_weight += weight;
                break;
            case 'c':
                printf("Enter the weight of carrots (lbs): ");
                scanf("%lf", &weight);
                carrot_weight += weight;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    double artichoke_cost = artichoke_weight * ARTICHOKE_PRICE;
    double beet_cost = beet_weight * BEET_PRICE;
    double carrot_cost = carrot_weight * CARROT_PRICE;

    total_cost = artichoke_cost + beet_cost + carrot_cost;
    total_weight = artichoke_weight + beet_weight + carrot_weight;

    if (total_cost > DISCOUNT_THRESHOLD) {
        discount = total_cost * DISCOUNT_RATE;
    }

    if (total_weight <= 5) {
        shipping_cost = SHIPPING_COST_5;
    } else if (total_weight <= 20) {
        shipping_cost = SHIPPING_COST_20;
    } else {
        shipping_cost = SHIPPING_COST_20 + (total_weight - 20) * EXTRA_SHIPPING_COST;
    }

    grand_total = total_cost - discount + shipping_cost;

    printf("\nOrder Summary:\n");
    printf("Artichokes: %.2f lbs @ $%.2f/lb = $%.2f\n", artichoke_weight, ARTICHOKE_PRICE, artichoke_cost);
    printf("Beets: %.2f lbs @ $%.2f/lb = $%.2f\n", beet_weight, BEET_PRICE, beet_cost);
    printf("Carrots: %.2f lbs @ $%.2f/lb = $%.2f\n", carrot_weight, CARROT_PRICE, carrot_cost);
    printf("Total cost of vegetables: $%.2f\n", total_cost);
    printf("Discount: -$%.2f\n", discount);
    printf("Shipping and packaging: $%.2f\n", shipping_cost);
    printf("Grand total: $%.2f\n", grand_total);

    return 0;
}