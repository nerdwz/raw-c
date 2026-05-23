/*
 * Exercise 02 - Format Specifiers
 *
 * Practice:
 *   - %d for integers
 *   - %f for floats
 *   - %c for characters
 *   - %s for strings
 *
 * Task:
 *   Declare one variable of each type below and print
 *   them using the correct format specifier:
 *
 *   Age: 22
 *   Height: 1.75
 *   Initial: A
 *   Name: Ada
 */
 
 #include <stdio.h>
 int main() {
 	
 	int age = 22;
 	float height = 1.75;
 	char initial = 'A';
 	char name[] = "Ada";
 	
 		printf("Age: %d\n", age);
 		printf("Height: %.2f\n", height);
 		printf("Initial: %c\n", initial);
 		printf("Name: %s\n", name);
 	
 	return 0;
 }
