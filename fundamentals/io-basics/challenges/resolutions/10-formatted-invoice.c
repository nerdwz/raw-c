/*
 * Challenge 10 - Formatted Invoice
 *
 * Practice:
 *   - scanf with string, int, and float
 *   - arithmetic (multiplication, tax)
 *   - formatted output with alignment
 *
 * Task:
 *   Ask the user for 3 products: name, quantity, and unit price.
 *   Print a detailed invoice with subtotals, 8% tax, and final total.
 *
 *   Expected output:
 *   ======== INVOICE ========
 *   Notebook  x2  R$ 10.00  =  R$ 20.00
 *   Pen       x5  R$  2.50  =  R$ 12.50
 *   Eraser    x3  R$  1.00  =  R$  3.00
 *   -------------------------
 *   Subtotal         R$ 35.50
 *   Tax (8%)         R$  2.84
 *   Total            R$ 38.34
 */

#include <stdio.h>

int main() {

char p1[15], p2[15], p3[15];
float v1, v2, v3, st, tx, t;
int q1, q2, q3;

    // Input 1
    printf("Product 1 name: ");
    scanf("%s", p1);
    
    printf("Quantity: ");
    scanf("%d", &q1);

    printf("Product 1 price: ");
    scanf("%f", &v1);

    // Input 2
    printf("\nProduct 2 name: ");
    scanf("%s", p2);

	printf("Quantity: ");
    scanf("%d", &q2);

    printf("Product 2 price: ");
    scanf("%f", &v2);

    // Input 3
    printf("\nProduct 3 name: ");
    scanf("%s", p3);
    
    printf("Quantity: ");
    scanf("%d", &q3);

    printf("Product 3 price: ");
    scanf("%f", &v3);

    // Total
    st = (v1 * q1) + (v2 * q2) + (v3 * q3);
    tx = st * 0.08;
    t = st + tx;

    // Receipt
    printf("\n======= INVOICE =======\n");

    printf("%-15s x%-3d R$ %6.2f = R$%7.2f\n", p1, q1, v1, q1 * v1);
    printf("%-15s x%-3d R$ %6.2f = R$%7.2f\n", p2, q2, v2, q2 * v2);
    printf("%-15s x%-3d R$ %6.2f = R$%7.2f\n", p3, q3, v3, q3 * v3);

    printf("------------------------\n");
    printf("%-12s R$ %7.2f\n", "Subtotal", st);
    printf("%-12s R$ %7.2f\n", "Tax (8%)", tx);
    printf("%-12s R$ %7.2f\n", "Total", t);

    return 0;
}