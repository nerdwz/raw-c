/*
 * Challenge 07 - Full Calculator
 *
 * Practice:
 *   - scanf with float
 *   - arithmetic (addition, subtraction, multiplication, division, modulo)
 *   - formatted output
 *
 * Task:
 *   Ask the user for two floats.
 *   Print results of addition, subtraction, multiplication,
 *   division, and remainder.
 *
 *   Expected output:
 *   Enter two numbers: 9 4
 *   9.00 + 4.00 = 13.00
 *   9.00 - 4.00 = 5.00
 *   9.00 * 4.00 = 36.00
 *   9.00 / 4.00 = 2.25
 *   9 % 4       = 1
 */

#include <stdio.h>

int main() {

	// Variables
	float n1, n2;

	// Input
	printf("Enter two numbers: ");
		scanf("%f %f", &n1, &n2);

	// Output
	printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
	printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
	printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
	printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
	printf("%d %% %d       = %d\n", (int)n1, (int)n2, (int)n1 % (int)n2);

    return 0;
}
