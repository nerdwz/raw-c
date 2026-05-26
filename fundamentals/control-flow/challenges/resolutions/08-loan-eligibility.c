/*
 * Challenge 08 - Loan Eligibility
 *
 * Practice:
 *   - nested if / else
 *   - multiple conditions combined
 *
 * Task:
 *   Ask the user for monthly income, credit score (0–1000),
 *   and requested loan amount.
 *   Print whether the loan is approved, and if so, the interest rate.
 *
 *   Score below 500              : denied
 *   Score 500–749                : approved at 8%
 *   Score 750+                   : approved at 4%
 *   Loan amount must be at most 10x the monthly income
 *
 *   Expected output:
 *   Monthly income: 3000.00
 *   Credit score: 720
 *   Loan amount: 20000.00
 *   Status  : Approved
 *   Interest: 8%
 *
 */

#include <stdio.h>

int main() {

    // Variables
    int score;
    float income, loan;

    // Input
    printf("Monthly income: ");
        scanf("%f", &income);

    printf("Credit score: ");
        scanf("%d", &score);

    printf("Loan amount: ");
        scanf("%f", &loan);

    // Conditions
    if (loan > income * 10 || score < 500) {

        // Output
        printf("Status  : Denied\n");

    } else {

        // Output
        printf("Status  : Approved\n");

        if (score >= 750) {
            printf("Interest: 4%%\n");
        } else {
            printf("Interest: 8%%\n");
        }
    }

    return 0;
}
