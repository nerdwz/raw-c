#include <stdio.h>

int main() {

    // Header
    printf("%-15s %10s\n", "Item", "Price");

    // Items
    printf("%-15s %10.2f\n", "Apple", 1.50);
    printf("%-15s %10.2f\n", "Banana", 0.75);
    printf("%-15s %10.2f\n", "Watermelon", 12.00);

    return 0;
}
