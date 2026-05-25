/*
 * Challenge 03 - Simple Menu
 *
 * Practice:
 *   - switch / case
 *   - default case for invalid input
 *
 * Task:
 *   Ask the user to choose a shape:
 *   1 = Circle, 2 = Square, 3 = Triangle
 *   Print the name and a brief description of each.
 *
 *   Expected output:
 *   1 - Circle
 *   2 - Square
 *   3 - Triangle
 *   Choice: 2
 *   Shape: Square
 *   Sides: 4
 *   Angles: 90 degrees each
 *
 */

#include <stdio.h>

int main() {

    // Variable
    int choice;

    // Menu
    printf("1 - Circle\n");
    printf("2 - Square\n");
    printf("3 - Triangle\n");

    // Input
    printf("Choice: ");
    scanf("%d", &choice);

    // Switch
    switch(choice) {

        case 1:
            printf("\nShape: Circle\n");
            printf("Sides: 0\n");
            printf("Angles: None\n");
            break;

        case 2:
            printf("\nShape: Square\n");
            printf("Sides: 4\n");
            printf("Angles: 90 degrees each\n");
            break;

        case 3:
            printf("\nShape: Triangle\n");
            printf("Sides: 3\n");
            printf("Angles: 3 interior angles\n");
            break;

        default:
            printf("\nError: Invalid option.\n");
            break;
    }

    return 0;
}
