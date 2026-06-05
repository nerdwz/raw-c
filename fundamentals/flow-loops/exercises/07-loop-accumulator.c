/*
 * Exercise 07 - loop-accumulator
 *
 * Practice:
 *   - accumulating values inside a loop
 *   - summing a sequence of numbers
 *
 * Task:
 *   Using a for loop, read 5 integers from the user
 *   and print their sum at the end.
 *
 *   Expected output:
 *   Enter number 1: 4
 *   Enter number 2: 7
 *   Enter number 3: 2
 *   Enter number 4: 9
 *   Enter number 5: 1
 *   Sum: 23
 */

#include <stdio.h>

int main() {

    int i, sum = 0, n;
    
    for(i = 1; i <=5; i++) {
    	printf("Enter number %d: ", i);
    		scanf("%d", &n);
    	sum += n;		 	
		}
		
		printf("Sum: %d", sum);
    
    return 0;
}
