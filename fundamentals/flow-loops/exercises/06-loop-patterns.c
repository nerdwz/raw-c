/*
 * Exercise 06 - loop-patterns
 *
 * Practice:
 *   - nested loops for pattern building
 *   - controlling columns with inner loop
 *   - controlling rows with outer loop
 *
 * Task:
 *   Using nested for loops, print a right triangle
 *   made of asterisks. The triangle has 5 rows.
 *   Each row i prints i asterisks.
 *
 *   Expected output:
 *   *
 *   **
 *   ***
 *   ****
 *   *****
 */

#include <stdio.h>

int main() {

    int i, j;

    for (i = 1; i <= 5; i++) {

        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
