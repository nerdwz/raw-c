/*
 * Exercise 03 - if-else-chain
 *
 * Practice:
 *   - if / else if / else chain
 *   - multiple conditions
 *
 * Task:
 *   Read a student's grade (0 to 100) from the user.
 *   Print the corresponding letter:
 *     90 to 100 -> A
 *     80 to 89  -> B
 *     70 to 79  -> C
 *     60 to 69  -> D
 *     below 60  -> F
 *
 *   Expected output (example):
 *   Enter grade: 85
 *   Letter: B
 */

#include <stdio.h>

int main() {
    
    //Variables.
    int grade;
    
    //Inputs.
    printf("Enter grade: ");
    	scanf("%d", &grade);
    
		//Conditionals.	
	   if (grade < 0 || grade > 100) {
	    printf("Insert a number between 0 and 100.");
	} else if (grade >= 90) {
	    printf("Letter: A");
	} else if (grade >= 80) {
	    printf("Letter: B");
	} else if (grade >= 70) {
	    printf("Letter: C");
	} else if (grade >= 60) {
	    printf("Letter: D");
	} else {
	    printf("Letter: F");
	}
    
    return 0;
}
