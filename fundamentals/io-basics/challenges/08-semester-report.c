/*
 * Challenge 08 - Semester Report
 *
 * Practice:
 *   - scanf with string and float
 *   - arithmetic (sum, average)
 *   - formatted output with alignment
 *
 * Task:
 *   Ask the user for a student name and 4 grades.
 *   Print each grade, the average, and the total points.
 *
 *   Expected output:
 *   Student: John
 *   Grade 1: 7.5
 *   Grade 2: 8.0
 *   Grade 3: 6.5
 *   Grade 4: 9.0
 *   ---------------------
 *   Total  : 31.00
 *   Average: 7.75
 */

#include <stdio.h>

int main() {

	// Variables
	char name[20];
	float g1, g2, g3, g4, total, average;

	// Input
	printf("Student: ");
		scanf("%s", name);

	printf("Grade 1: ");
		scanf("%f", &g1);

	printf("Grade 2: ");
		scanf("%f", &g2);

	printf("Grade 3: ");
		scanf("%f", &g3);

	printf("Grade 4: ");
		scanf("%f", &g4);

	// Calculations
	total = g1 + g2 + g3 + g4;
	average = total / 4;

	// Output
	printf("\nStudent: %s\n", name);
	printf("Grade 1: %.1f\n", g1);
	printf("Grade 2: %.1f\n", g2);
	printf("Grade 3: %.1f\n", g3);
	printf("Grade 4: %.1f\n", g4);
	printf("---------------------\n");
	printf("Total  : %.2f\n", total);
	printf("Average: %.2f\n", average);

    return 0;
}
