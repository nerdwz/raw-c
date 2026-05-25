/*
 * Challenge 06 - Personal Card
 *
 * Practice:
 *   - scanf with mixed types (string, int, float)
 *   - arithmetic (BMI formula)
 *   - formatted output
 *
 * Task:
 *   Ask the user for name, age, height and weight.
 *   Print a formatted personal card with BMI.
 *
 *   BMI = weight / (height * height)
 *
 *   Expected output:
 *
 *   ================================
 *           Personal Card
 *   ================================
 *   Name   : John
 *   Age    : 22
 *   Height : 1.75m
 *   Weight : 70kg
 *   BMI    : 22.86
 *   ================================
 */

#include <stdio.h>

int main() {

	// Variables
	char name[20];
	int age;
	float height, weight, bmi;

	// Input
	printf("Name: ");
		scanf("%s", name);

	printf("Age: ");
		scanf("%d", &age);

	printf("Height: ");
		scanf("%f", &height);

	printf("Weight: ");
		scanf("%f", &weight);

	// Calculation
	bmi = weight / (height * height);

	// Output
	printf("================================\n");
	printf("        Personal Card\n");
	printf("================================\n");
	printf("Name   : %s\n", name);
	printf("Age    : %d\n", age);
	printf("Height : %.2fm\n", height);
	printf("Weight : %.2fkg\n", weight);
	printf("BMI    : %.2f\n", bmi);
	printf("================================\n");

    return 0;
}
