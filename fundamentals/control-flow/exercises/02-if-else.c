/*
 * Exercise 02 - if-else
 *
 * Practice:
 *   - if / else structure
 *   - comparison operators
 *
 * Task:
 *   Read two integers from the user.
 *   Print which one is greater, or if they are equal.
 *
 *   Expected output (example):
 *   Enter two numbers: 10 3
 *   10 is greater than 3.
 */

#include <stdio.h>

int main() {
	
    //Variables.
    int n1, n2;
    
    //Input.
    printf("Enter two numbers: ");
    	scanf("%d %d", &n1, &n2);
    	
    //Conditionals.	
    if (n1 == n2) {
    	printf("%d and %d are the same.", n1, n2);
		} else if(n1 > n2) {
			printf("%d is greater than %d", n1, n2);
		} else {
			printf("%d is greater than %d", n2, n1);
		}
    
    return 0;
}
