/*
 * Challenge 02 - sum-series
 *
 * Practice:
 *   - accumulation
 *   - for loop
 *
 * Task:
 *   Ask the user for N and print the sum
 *   from 1 to N.
 */

#include <stdio.h>

int main() {

    int n, i, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum from 1 to %d: %d", n, sum);

    return 0;
}
