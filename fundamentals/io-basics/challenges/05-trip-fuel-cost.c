/*
 * Challenge 05 - Trip Fuel Cost
 *
 * Practice:
 *   - scanf with float
 *   - arithmetic (division, multiplication)
 *   - formatted output
 *
 * Task:
 *   Ask the user for distance (km), fuel efficiency (km/L),
 *   and price per liter.
 *   Print the total liters needed and total cost.
 *
 *   Expected output:
 *   Distance (km): 300
 *   Efficiency (km/L): 12
 *   Price per liter: 5.89
 *   Liters needed: 25.00
 *   Total cost: R$ 147.25
 */

#include <stdio.h>

int main() {

// Variables
float dist, effic, price, liter, total;

// Input
printf("Distance (km): ");
	scanf("%f", &dist);

printf("Efficiency (km/L): ");
	scanf("%f", &effic);

printf("Price per liter: ");
	scanf("%f", &price);

// Calculations
liter = (dist / effic);
total = (liter * price);

// Output
printf("Liters needed: %.2f\n", liter);
printf("Total cost: R$ %.2f", total);

    return 0;
}
