/*
 * Exercise 01 - if-basic
 *
 * Practice:
 *   - if statement
 *   - simple boolean condition
 *
 * Task:
 *   Read an integer from the user.
 *   If the number is positive, print a message saying so.
 *   If it is zero, print a message saying so.
 *   If it is negative, print a message saying so.
 *
 *   Expected output (example):
 *   Enter a number: -7
 *   The number is negative.
 */

#include <stdio.h>

int main() {
	
    //Variables
    int n;
    
    //Input
    printf("Enter a number: ");
    	scanf("%d", &n);
    	
    //Conditions
    if(n == 0) {
    	printf("The number is zero.");
		} else if(n > 0) {
			printf("The number is positive.");
		} else {
			printf("The number is negative.");
		}
    
    return 0;
}
