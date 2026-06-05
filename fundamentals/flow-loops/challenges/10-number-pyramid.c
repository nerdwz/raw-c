/*
 * Challenge 10 - number pyramid
 *
 * Practice:
 *   - nested loops
 *   - spacing control
 *   - pattern generation
 *
 * Task:
 *   Ask the user for a number N and
 *   print a centered number pyramid
 *   with N rows.
 *
 *   Expected output:
 *   Enter N: 4
 *      1
 *     1 2
 *    1 2 3
 *   1 2 3 4
 */

#include <stdio.h>

int main() {

    int n;
    int i;
    int j;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
