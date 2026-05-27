/*
 * Exercise 02 - while-basic
 *
 * Practice:
 *   - while loop syntax
 *   - condition-controlled iteration
 *   - sequential printing
 *
 * Task:
 *   Using a while loop, print the numbers from 1 to 10,
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
    
    while(i <= 10) {
    	printf("%d\n", i);
    	
    	i++;
		}

    return 0;
}
