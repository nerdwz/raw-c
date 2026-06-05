/*
 * Challenge 06 - fibonacci
 *
 * Practice:
 *   - for loop
 *   - variable updates
 *   - sequence generation
 *
 * Task:
 *   Ask the user for a positive integer N
 *   and print the first N terms of the
 *   Fibonacci sequence.
 *
 *   Expected output:
 *   Enter N: 8
 *   0 1 1 2 3 5 8 13
 */

#include <stdio.h>

int main() {

    int n;
    int i;
    int a = 0;
    int b = 1;
    int c;

    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
