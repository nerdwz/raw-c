/*
 * Challenge 10 - Vending Machine
 *
 * Practice:
 *   - switch / case
 *   - integer arithmetic for cents
 *   - nested conditions
 *
 * Task:
 *   Ask the user to choose a product (1–4) and insert an amount
 *   in coins (integer cents). Print the product price, whether
 *   the payment is enough, and the change — or prompt to insert more.
 *
 *   Water  : R$ 2.00 (200 cents)
 *   Juice  : R$ 4.50 (450 cents)
 *   Soda   : R$ 5.00 (500 cents)
 *   Coffee : R$ 3.50 (350 cents)
 *
 *   Expected output:
 *   1 - Water   R$ 2.00
 *   2 - Juice   R$ 4.50
 *   3 - Soda    R$ 5.00
 *   4 - Coffee  R$ 3.50
 *   Choice: 3
 *   Insert amount (cents): 600
 *   Product : Soda
 *   Price   : R$ 5.00
 *   Paid    : R$ 6.00
 *   Change  : R$ 1.00
 *
 */

#include <stdio.h>

int main() {

    // Variables
    int choice, amount, price, change;
    char product[20];

    // Menu
    printf("1 - Water   R$ 2.00\n");
    printf("2 - Juice   R$ 4.50\n");
    printf("3 - Soda    R$ 5.00\n");
    printf("4 - Coffee  R$ 3.50\n");

    // Input
    printf("Choice: ");
        scanf("%d", &choice);

    printf("Insert amount (cents): ");
        scanf("%d", &amount);

    // Conditions
    switch (choice) {

        case 1:
            price = 200;
            sprintf(product, "Water");
            break;

        case 2:
            price = 450;
            sprintf(product, "Juice");
            break;

        case 3:
            price = 500;
            sprintf(product, "Soda");
            break;

        case 4:
            price = 350;
            sprintf(product, "Coffee");
            break;

        default:
            printf("Invalid option\n");
            return 0;
    }

    // Output
    printf("Product : %s\n", product);
    printf("Price   : R$ %.2f\n", price / 100.0);
    printf("Paid    : R$ %.2f\n", amount / 100.0);

    // Payment
    if (amount >= price) {

        change = amount - price;

        printf("Change  : R$ %.2f\n", change / 100.0);

    } else {

        printf("Insert more money\n");
    }

    return 0;
}
