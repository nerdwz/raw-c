/*
 * Challenge 07 - pattern printer
 *
 * Practice:
 *   - nested loops
 *   - pattern generation
 *   - repetition control
 *
 * Task:
 *   Ask the user for a number N and
 *   print a right triangle of asterisks
 *   with N rows, then print it upside
 *   down without repeating the middle row.
 *
 *   Expected output:
 *   Enter N: 4
 *   *
 *   **
 *   ***
 *   ****
 *   ***
 *   **
 *   *
 */

#include <stdio.h>

int main() {

    int n;
    int i;
    int j;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
