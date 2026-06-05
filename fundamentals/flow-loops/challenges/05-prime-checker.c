/*
 * Challenge 05 - prime checker
 *
 * Practice:
 *   - for loop
 *   - modulus operator
 *   - logical conditions
 *
 * Task:
 *   Ask the user for a positive integer
 *   and determine whether it is prime.
 *
 *   Expected output:
 *   Enter a number: 17
 *   17 is prime.
 */

#include <stdio.h>

int main() {

    int n;
    int i;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("%d is prime.", n);
    } else {
        printf("%d is not prime.", n);
    }

    return 0;
}
