/*
 * Challenge 01 - Grade Classifier
 *
 * Practice:
 *   - if / else if / else chains
 *   - numeric range checking
 *
 * Task:
 *   Ask the user for a numeric grade (0–100).
 *   Print the corresponding letter grade.
 *
 *   A: 90–100
 *   B: 80–89
 *   C: 70–79
 *   D: 60–69
 *   F: below 60
 *
 *   Expected output:
 *   Grade: 85
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
