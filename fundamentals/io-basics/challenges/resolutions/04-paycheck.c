/*
 * Challenge 04 - Paycheck
 *
 * Practice:
 *   - scanf with float and int
 *   - arithmetic (multiplication)
 *   - formatted output with alignment
 *
 * Task:
 *   Ask the user for an hourly wage and number of hours worked.
 *   Print the gross pay, 10% tax, and net pay.
 *
 *   Expected output:
 *   Hourly wage: 25.00
 *   Hours worked: 40
 *   Gross pay : R$ 1000.00
 *   Tax (10%) : R$  100.00
 *   Net pay   : R$  900.00
 */

#include <stdio.h>

int main() {

	// Variables
int work;
float wage, gross, tax;

// Input
printf("Hourly wage: ");
	scanf("%f", &wage);

printf("Hours worked: ");
	scanf("%d", &work);

// Calculations
gross = wage * work;
tax = gross * 0.1;

// Output
printf("Gross pay : R$%8.2f\n", gross);
printf("Tax (10%%) : R$%8.2f\n", tax);
printf("Net pay   : R$%8.2f\n", gross - tax);

    return 0;
}
