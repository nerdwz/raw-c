/*
 * Exercise 08 - printf and scanf Combined
 *
 * Practice:
 *   - reading multiple values with scanf
 *   - formatting output with printf
 *   - combining everything from exercises 01-07
 *
 * Task:
 *   Ask the user for three product names and their prices.
 *   Print a formatted receipt at the end.
 *
 *   Expected interaction:
 *   Product 1 name: Apple
 *   Product 1 price: 1.50
 *   Product 2 name: Banana
 *   Product 2 price: 0.75
 *   Product 3 name: Watermelon
 *   Product 3 price: 12.00
 *
 *   --- Receipt ---
 *   Apple            1.50
 *   Banana           0.75
 *   Watermelon      12.00
 *   Total           14.25
 */
 
 #include <stdio.h>
	int main() {

    char p1[15], p2[15], p3[15];
    float v1, v2, v3, t;

    // Input 1
    printf("Product 1 name: ");
    scanf("%s", p1);

    printf("Product 1 price: ");
    scanf("%f", &v1);

    // Input 2
    printf("\nProduct 2 name: ");
    scanf("%s", p2);

    printf("Product 2 price: ");
    scanf("%f", &v2);

    // Input 3
    printf("\nProduct 3 name: ");
    scanf("%s", p3);

    printf("Product 3 price: ");
    scanf("%f", &v3);

    // Total
    t = v1 + v2 + v3;

    // Receipt
    printf("\n--- Receipt ---\n");

    printf("%-15s %8.2f\n", p1, v1);
    printf("%-15s %8.2f\n", p2, v2);
    printf("%-15s %8.2f\n", p3, v3);

    printf("------------------------\n");
    printf("%-15s %8.2f\n", "Total", t);

    return 0;
}
