/*
 * Exercise 01 - for-basic
 *
 * Practice:
 *   - for loop syntax
 *   - control variable and increment
 *   - sequential printing
 *
 * Task:
 *   Using a for loop, print the numbers from 1 to 10,
 *   each on a separate line.
 *
 *   Expected output:
 *   1
 *   2
 *   3
 *   4
 *   5
 *   6
 *   7
 *   8
 *   9
 *   10
 */

#include <stdio.h>

int main() {
	
	int i;
	
    for (i = 1; i <= 10; i++) {
    	printf("%d\n", i);
		}

    return 0;
}
