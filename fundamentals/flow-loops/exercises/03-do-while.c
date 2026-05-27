/*
 * Exercise 03 - do-while
 *
 * Practice:
 *   - do while loop syntax
 *   - execute-then-check behavior
 *   - sequential printing
 *
 * Task:
 *   Using a do while loop, print the numbers from 1 to 10,
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

		int i = 1;

    do {
    	printf("%d\n", i);
    	
    	i++;
		} while (i <= 10);

    return 0;
}
