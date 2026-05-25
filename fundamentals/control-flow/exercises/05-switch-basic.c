/*
 * Exercise 05 - switch-basic
 *
 * Practice:
 *   - switch statement
 *   - case / break / default
 *
 * Task:
 *   Read an integer from 1 to 7 representing a day of the week.
 *   Print the corresponding day name.
 *   If the number is out of range, print an error message.
 *
 *   Expected output (example):
 *   Enter a day (1-7): 3
 *   Wednesday
 */

#include <stdio.h>

int main() {
    
    //Variables.
    int day;
    
    //Input.
    printf("Enter a day (1-7): ");
    	scanf("%d", &day);
    	
    //Conditional.	
    switch (day) {
    	
    	case 1:
    		printf("Monday");
    			break;
    	
    	case 2: 
    		printf("Tuesday");
    			break;
    		
    	case 3: 
    		printf("Wednesday");
    			break;
    		
    	case 4: 
    		printf("Thursday");
    			break;
    		
    	case 5: 
    		printf("Friday");
    			break;
    	
    	case 6: 
    		printf("Saturday");
    			break;
    		
    	case 7: 
    		printf("Sunday");
    			break;
    			
    	default:
   	 		printf("Invalid day. \nEnter a number between 1 and 7.");
    			break;
		} 
    
    return 0;
}
