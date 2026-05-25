/*
 * Exercise 08 - conditions-combined
 *
 * Practice:
 *   - combining if / else if / else with switch
 *   - logical operators
 *
 * Task:
 *   Read an integer from the user.
 *   First, use if/else to classify it as negative, zero, or positive.
 *   If positive, use a switch to classify it as:
 *     1        -> One
 *     2 to 5   -> Small
 *     6 to 9   -> Medium
 *     10+      -> Large
 *
 *   Expected output (example):
 *   Enter a number: 7
 *   Positive.
 *   Medium.
 */

#include <stdio.h>

int main() {

    // Variables
    int n;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Conditionals
    if (n == 0) {

        printf("This number is zero, try again.");

    } else if (n < 0) {

        printf("This number is negative, try again.");

    } else {
    	
			printf("This number is positive.\n");
				
        if (n == 1) {

            printf("One.");

        } else if (n <= 5) {

            printf("Small.");

        } else if (n <= 9) {

            printf("Medium.");

        } else {

            printf("Large.");
        }
    }

    return 0;
}
