/*
 * Exercise 05 - Arithmetic Operators
 *
 * Practice:
 *   - using +, -, *, /
 *   - integer vs float division
 *   - printing results with printf
 *
 * Task:
 *   Ask the user for two integers a and b.
 *   Print the result of each operation below.
 *
 *   Expected interaction:
 *   Enter a: 10
 *   Enter b: 3
 *
 *   --- Results ---
 *   a + b = 13
 *   a - b = 7
 *   a * b = 30
 *   a / b = 3.33
 */
 
 #include <stdio.h>

int main() {

    int a, b;

    printf("Enter a: ");
    	scanf("%d", &a);

    printf("Enter b: ");
    	scanf("%d", &b);

    printf("\n--- Results ---\n");

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %.2f\n", a, b, (float)a / b);

    return 0;
}
