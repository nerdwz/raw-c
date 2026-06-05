/*
 * Challenge 04 - digit counter
 *
 * Practice:
 *   - while loop
 *   - integer division
 *   - counting iterations
 *
 * Task:
 *   Ask the user for a positive integer
 *   and count how many digits it has.
 *
 *   Expected output:
 *   Enter a number: 3847
 *   Digits: 4
 */

#include <stdio.h>

int main() {

    int n;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        count++;
        n = n / 10;
    } while (n > 0);

    printf("Digits: %d", count);

    return 0;
}
