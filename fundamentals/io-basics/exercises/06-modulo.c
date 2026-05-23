/*
 * Exercise 06 - Modulo Operator
 *
 * Practice:
 *   - using % to get the remainder of a division
 *   - combining / and % to break down a value
 *
 * Task:
 *   Ask the user for a number of seconds.
 *   Break it down into minutes and seconds.
 *
 *   Expected interaction:
 *   Enter seconds: 143
 *
 *   --- Breakdown ---
 *   Minutes: 2
 *   Seconds: 23
 */
 
 #include <stdio.h>
 int main() {
 	
 	int seconds, minutes;
 	
 	printf("Enter seconds: ");
 		scanf("%d", &seconds);
 		
 		minutes = (seconds / 60 );
 		seconds = (seconds % 60);
 		
 	printf("--- Breakdown ---\n");
	 	printf("Minutes: %d\n", minutes);
	 	printf("Seconds: %d\n", seconds);
 	
 	return 0;
 }
