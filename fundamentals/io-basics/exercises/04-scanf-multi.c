/*
 * Exercise 04 - Multiple scanf
 *
 * Practice:
 *   - reading multiple values from the user
 *   - using scanf more than once
 *   - combining %d, %f and %s
 *
 * Task:
 *   Ask the user for their name, age and height.
 *   Print all values back in a summary.
 *
 *   Expected interaction:
 *   Enter your name: Ada
 *   Enter your age: 22
 *   Enter your height (m): 1.75
 *
 *   --- Summary ---
 *   Name:   Ada
 *   Age:    22
 *   Height: 1.75m
 */
 
 #include <stdio.h>
 int main() {
 	
 	int age;
 	char name[20];
 	float height;
 	
 	printf("Enter your name: ");
 		scanf("%s", name);
 	printf("Enter your age: ");
 		scanf("%d", &age);
 	printf("Enter your height (m): ");
 		scanf("%f", &height);
 		
 		printf("--- Summary ---\n");
 			printf("Name:\t %s \n", name);
 			printf("Age:\t %d \n", age);
 			printf("Height:\t %.2fm \n", height);
 	
 	return 0;
 }
