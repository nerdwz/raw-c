/*
 * Challenge 03 - countdown
 *
 * Practice:
 *   - while loop
 *   - decrement operator
 *   - repetition control
 *
 * Task:
 *   Ask the user for a positive integer
 *   and count down to 0, printing each
 *   number. Print "Go!" at the end.
 *
 *   Expected output:
 *   Enter a number: 5
 *   5
 *   4
 *   3
 *   2
 *   1
 *   0
 *   Go!
 */

#include <stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n >= 0) {
        printf("%d\n", n);
        n--;
    }

    printf("Go!");

    return 0;
}
