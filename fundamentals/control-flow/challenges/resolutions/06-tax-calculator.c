/*
 * Challenge 06 - Tax Calculator
 *
 * Practice:
 *   - if / else if / else chains
 *   - float arithmetic with percentages
 *
 * Task:
 *   Ask the user for a monthly income.
 *   Print the tax rate, tax amount, and net income.
 *
 *   Up to R$ 2000        : exempt (0%)
 *   R$ 2001 – R$ 4000    : 10%
 *   R$ 4001 – R$ 8000    : 20%
 *   Above R$ 8000        : 35%
 *
 *   Expected output:
 *   Monthly income: 5000.00
 *   Tax rate : 20%
 *   Tax amount: R$ 1000.00
 *   Net income: R$ 4000.00
 *
 */

#include <stdio.h>

int main() {
	
	//Variables.
	float mi, tax;
	
	//Input.
	printf("Monthly income: ");
		scanf("%f", &mi);
		
	//Conditionals.	
	if ( mi < 0) {
		printf("Sorry, negative no.");
} else if ( mi >= 0 && mi <= 2000) {
		printf("Tax rate : 0%%\n");
		printf("Tax amount: R$ 0\n");
		printf("Net income: R$ %.2f\n", mi);
	} else if (mi >= 2001 && mi <= 4000) {
		printf("Tax rate : 10%%\n");
		
		tax = mi * 0.10;
		
		printf("Tax amount: R$ %.2f\n", tax);
		printf("Net income: R$ %.2f\n", mi - tax);
	} else if (mi >= 4001 && mi <= 8000) {
		printf("Tax rate : 20%%\n");
		
		tax = mi * 0.20;
		
		printf("Tax amount: R$ %.2f\n", tax);
		printf("Net income: R$ %.2f\n", mi - tax);
	} else {
		printf("Tax rate : 35%%\n");
		
		tax = mi * 0.35;
		
		printf("Tax amount: R$ %.2f\n", tax);
		printf("Net income: R$ %.2f\n", mi - tax);
	}

    return 0;
}
