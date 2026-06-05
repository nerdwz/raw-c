/*
 * Challenge 09 - collatz
 *
 * Practice:
 *   - while loop
 *   - conditional logic
 *   - sequence generation
 *
 * Task:
 *   Ask the user for a positive integer.
 *   Apply the Collatz sequence until
 *   reaching 1. Print each step and
 *   the total number of steps.
 *
 *   Expected output:
 *   Enter a number: 6
 *   6 3 10 5 16 8 4 2 1
 *   Steps: 8
 */

#include <stdio.h>

int main() {

    int n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 1) {

        printf("%d ", n);

        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }

        count++;
    }

    printf("1\n");
    printf("Steps: %d", count);

    return 0;
}
