/*
 * Challenge 07 - Shipping Cost
 *
 * Practice:
 *   - nested if / else
 *   - combined conditions with float arithmetic
 *
 * Task:
 *   Ask the user for package weight (kg) and destination region
 *   (1 = local, 2 = state, 3 = national).
 *   Print the shipping cost.
 *
 *   Local    : R$ 2.00/kg
 *   State    : R$ 4.50/kg
 *   National : R$ 8.00/kg
 *
 *   Orders above 10kg get 10% discount on shipping.
 *
 *   Expected output:
 *   Weight (kg): 12
 *   Region (1-3): 2
 *   Shipping cost: R$ 48.60
 *
 */

#include <stdio.h>

int main() {

    // Variables
    int region;
    float weight, shipping;

    // Input
    printf("Weight (kg): ");
        scanf("%f", &weight);

    printf("Region (1-3): ");
        scanf("%d", &region);

    // Conditions
    if (region == 1) {
        shipping = weight * 2.0;
    } else if (region == 2) {
        shipping = weight * 4.5;
    } else if (region == 3) {
        shipping = weight * 8.0;
    } else {
        printf("Invalid region.\n");
        return 0;
    }

    // Discount
    if (weight > 10) {
        shipping = shipping - (shipping * 0.10);
    }

    // Output
    printf("Shipping cost: R$ %.2f\n", shipping);

    return 0;
}
