/*
 * Exercise 04 - nested-if
 *
 * Practice:
 *   - nested if statements
 *   - multiple levels of conditions
 *
 * Task:
 *   Read two integers from the user.
 *   First, check if both are positive.
 *   If yes, check if the first is greater than, equal to, or less than the second.
 *   If any of them is not positive, print a message saying so.
 *
 *   Expected output (example):
 *   Enter two numbers: 8 3
 *   Both are positive.
 *   8 is greater than 3.
 */

#include <stdio.h>

int main() {
    
    //Variables
    int n1, n2;
    
    //Input.
    printf("Enter two numbers: ");
    	scanf("%d %d", &n1, &n2);
    	
    //Conditional.	
    if (n1 > 0 && n2 > 0) {
    	printf("Both are positive.\n");
    	if (n1 == n2) {
    		printf("%d and %d are the same.", n1, n2);
			} else if (n1 > n2) {
				printf("%d is greater than %d", n1, n2);
			} else {
				printf("%d is greater than %d", n2, n1);
			}
		} else {
			printf("Both numbers must be positive.");
		}
    
    return 0;
}
