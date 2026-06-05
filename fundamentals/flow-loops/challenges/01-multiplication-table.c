/*
 * Challenge 01 - multiplication-table
 *
 * Practice:
 *   - for loop
 *   - repetition
 *   - arithmetic operations
 *
 * Task:
 *   Ask the user for a number and print its
 *   multiplication table from 1 to 10.
 */

#include <stdio.h>

int main() {

    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
