/*
 * Challenge 05 - Ticket Price
 *
 * Practice:
 *   - nested if / else
 *   - multiple conditions combined
 *
 * Task:
 *   Ask the user for age and whether they are a student (1 = yes, 0 = no).
 *   Print the ticket price based on the rules below.
 *
 *   Under 12 or 60+      : free
 *   Student              : 50% off (R$ 20.00)
 *   Full price           : R$ 40.00
 *
 *   Student discount applies only if not already free.
 *
 *   Expected output:
 *   Age: 25
 *   Student (1/0): 1
 *   Ticket price: R$ 20.00
 *
 */

#include <stdio.h>

int main() {
		
		//Variables.
		int age, study;
		
		//Input 1.
    printf("Age: ");
    	scanf("%d", &age);
    
    //Conditional Age.
    if (age >= 60 || age <= 12) {
    	printf("Ticket price: free");
		} else {
			
			//Input 2.
			printf("Student (1/0): ");
				scanf("%d", &study);
			
			//Prices	
			if (study == 1) {
				printf("Ticket price: R$ 20.00");
			} else if (study == 0) {
				printf("Ticket price: R$ 40.00");
			} else {
				printf("This number is invalid, try again.");
			}
		}

    return 0;
}
