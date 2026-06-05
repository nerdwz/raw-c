/*
 * Exercise 08 - loop-validation
 *
 * Practice:
 *   - input validation with a loop
 *   - looping until valid input is received
 *   - do while for guaranteed first execution
 *
 * Task:
 *   Ask the user to enter a number between 1 and 10.
 *   Keep asking until a valid number is entered.
 *   When valid, print the number.
 *
 *   Expected output:
 *   Enter a number (1-10): 15
 *   Invalid. Try again: 0
 *   Invalid. Try again: 7
 *   You entered: 7
 */

#include <stdio.h>

int main() {

		int n;

    printf("Enter a number (1-10): ");
    scanf("%d", &n);

    while (n <= 0 || n > 10) {
        printf("Invalid. Try again: ");
        scanf("%d", &n);
    }

    printf("You entered: %d", n);

    return 0;
}
