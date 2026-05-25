/*
 * Exercise 06 - switch-fallthrough
 *
 * Practice:
 *   - switch fallthrough (intentional omission of break)
 *   - grouping cases
 *
 * Task:
 *   Read an integer from 1 to 7 representing a day of the week.
 *   Print whether it is a weekday or a weekend.
 *   If the number is out of range, print an error message.
 *
 *   Expected output (example):
 *   Enter a day (1-7): 6
 *   Weekend.
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
    case 2:
    case 3:
    case 4:
    case 5:
    	printf("Weekday");
    		break;
    		
    case 6:
    case 7:
    	printf("Weekend");
    		break;
    
    default: 
    	printf("Invalid Day.");
    		break;
    
		}
    
    return 0;
}
