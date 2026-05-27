/*
 * Exercise 05 - nested-loops
 *
 * Practice:
 *   - loops inside loops
 *   - outer and inner control variables
 *   - combined iteration
 *
 * Task:
 *   Using nested for loops, print a 3x3 grid of numbers.
 *   Each row shows the outer loop value and inner loop value
 *   separated by a space. Move to a new line after each row.
 *
 *   Expected output:
 *   1 1  1 2  1 3
 *   2 1  2 2  2 3
 *   3 1  3 2  3 3
 */

#include <stdio.h>

int main() {

    int i, j;
    
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d %d  ", i, j);
        }
        printf("\n");
    }
		
		

    return 0;
}
