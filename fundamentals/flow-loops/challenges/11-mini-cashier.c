/*
 * Challenge 11 - mini cashier
 *
 * Practice:
 *   - for loop
 *   - accumulation
 *   - conditional statements
 *
 * Task:
 *   Ask the user how many products
 *   they are buying. Read the price
 *   of each product and calculate the
 *   subtotal, discount and final total.
 *
 *   Expected output:
 *   Number of products: 3
 *   Price of item 1: 45.00
 *   Price of item 2: 30.00
 *   Price of item 3: 40.00
 *   Subtotal : R$ 115.00
 *   Discount : R$ 11.50
 *   Total    : R$ 103.50
 */

#include <stdio.h>

int main() {

    int n;
    int i;

    float price;
    float subtotal = 0;
    float discount = 0;
    float total;

    printf("Number of products: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        printf("Price of item %d: ", i);
        scanf("%f", &price);

        subtotal += price;
    }

    if (subtotal > 100) {
        discount = subtotal * 0.10;
    }

    total = subtotal - discount;

    printf("Subtotal : R$ %.2f\n", subtotal);
    printf("Discount : R$ %.2f\n", discount);
    printf("Total    : R$ %.2f\n", total);

    return 0;
}
