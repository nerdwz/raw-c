/*
 * Challenge 01 - Unit Converter
 *
 * Practice:
 *   - scanf with float
 *   - arithmetic (multiplication)
 *   - formatted output with alignment
 *
 * Task:
 *   Ask the user for a distance in kilometers.
 *   Print it converted to meters, centimeters, and millimeters.
 *
 *   Expected output:
 *   Distance (km): 2.5
 *   Meters      : 2500.00
 *   Centimeters : 250000.00
 *   Millimeters : 2500000.00
 */

#include <stdio.h>

int main() {

	float km;

	printf("Distance (km): ");
		scanf("%f", &km);
		
	printf("%-12s: %.2f\n", "Meters", km * 1000);
	printf("%-12s: %.2f\n", "Centimeters", km * 100000);
	printf("%-12s: %.2f\n", "Millimeters", km * 10000000);

    return 0;
}
