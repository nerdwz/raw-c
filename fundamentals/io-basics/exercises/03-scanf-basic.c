/*
 * Exercise 03 - Basic scanf
 *
 * Practice:
 *   - reading a single value from the user
 *   - using scanf with %d
 *   - printing the value back with printf
 *
 * Task:
 *   Ask the user for their age and print it back.
 *
 *   Expected interaction:
 *   Enter your age: 22
 *   You are 22 years old.
 */
 
 #include <stdio.h>
 int main() {
 	
 	int age;
 	
 	printf("Enter your age: ");
 		scanf("%d", &age);
 		
 	printf("Your are %d years old.", age);
 	printf("You are %d years old.\n", age);
 	
 	return 0;
 }
