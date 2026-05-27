/*
 * Exercise 04 - break-continue
 *
 * Practice:
 *   - break — exit a loop early
 *   - continue — skip to the next iteration
 *
 * Task:
 *   Using a for loop from 1 to 20:
 *   - skip even numbers (use continue)
 *   - stop the loop when the number exceeds 15 (use break)
 *   - print each number that passes both conditions
 *
 *   Expected output:
 *   1
 *   3
 *   5
 *   7
 *   9
 *   11
 *   13
 *   15
 */

#include <stdio.h>

int main() {

		int i;

		for (i = 1; i <= 20; i++) {
        if (i > 15) {
            break;
        }
        if (i % 2 == 0) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}
