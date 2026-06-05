/*
 * Challenge 08 - number guesser
 *
 * Practice:
 *   - do while loop
 *   - conditional statements
 *   - counting attempts
 *
 * Task:
 *   Generate a fixed target number.
 *   Ask the user to guess it.
 *   Print whether the guess is too low,
 *   too high, or correct.
 *
 *   Expected output:
 *   Guess: 20
 *   Too low.
 *   Guess: 60
 *   Too high.
 *   Guess: 42
 *   Correct! You got it in 3 attempts.
 */

#include <stdio.h>

int main() {

    int n;
    int count = 0;
    int target = 42;

    do {

        printf("Guess: ");
        scanf("%d", &n);

        count++;

        if (n < target) {
            printf("Too low.\n");
        } else if (n > target) {
            printf("Too high.\n");
        }

    } while (n != target);

    printf("Correct! You got it in %d attempts.", count);

    return 0;
}
