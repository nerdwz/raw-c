/*
 * Challenge 12 - Insurance Quote
 *
 * Practice:
 *   - if / else if / else chains
 *   - multiple adjustments stacking
 *   - float arithmetic with percentages
 *
 * Task:
 *   Ask the user for age, vehicle year, and whether they have
 *   a clean record (1 = yes, 0 = no).
 *   Print the base rate, applied adjustments, and final monthly premium.
 *
 *   Base rate            : R$ 200.00
 *   Age under 25         : +40%
 *   Age 60+              : +20%
 *   Vehicle older than 10 years : +15%
 *   No clean record      : +25%
 *   Adjustments stack.
 *
 *   Expected output:
 *   Age: 23
 *   Vehicle year: 2010
 *   Clean record (1/0): 0
 *   Base rate  : R$ 200.00
 *   Adjustments: +40% +15% +25%
 *   Premium    : R$ 360.00
 *
 */

#include <stdio.h>

int main() {

    // Variables
    int age, year, record;
    float base = 200.0, premium, adjust = 0.0;

    // Input
    printf("Age: ");
        scanf("%d", &age);

    printf("Vehicle year: ");
        scanf("%d", &year);

    printf("Clean record (1/0): ");
        scanf("%d", &record);

    // Output
    printf("Base rate  : R$ %.2f\n", base);

    // Adjustments
    printf("Adjustments:");

    if (age < 25) {
        adjust += 0.40;
        printf(" +40%%");
    } else if (age >= 60) {
        adjust += 0.20;
        printf(" +20%%");
    }

    if (2025 - year > 10) {
        adjust += 0.15;
        printf(" +15%%");
    }

    if (record == 0) {
        adjust += 0.25;
        printf(" +25%%");
    }

    // Calculation
    premium = base + (base * adjust);

    // Output
    printf("\nPremium    : R$ %.2f\n", premium);

    return 0;
}
