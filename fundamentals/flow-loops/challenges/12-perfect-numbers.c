/*
 * Challenge 12 - perfect numbers
 *
 * Practice:
 *   - nested loops
 *   - divisor calculation
 *   - accumulation
 *
 * Task:
 *   Ask the user for a positive integer N.
 *   Print all perfect numbers from 1 to N.
 *   A perfect number equals the sum of
 *   its proper divisors.
 *
 *   Expected output:
 *   Enter N: 1000
 *   Perfect numbers up to 1000:
 *   6
 *   28
 *   496
 */

#include <stdio.h>

int main() {

    int n;
    int i;
    int j;
    int sum;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Perfect numbers up to %d:\n", n);

    for (i = 1; i <= n; i++) {

        sum = 0;

        for (j = 1; j < i; j++) {

            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
