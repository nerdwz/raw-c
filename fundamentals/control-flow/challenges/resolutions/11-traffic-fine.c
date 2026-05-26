/*
 * Challenge 11 - Traffic Fine
 *
 * Practice:
 *   - if / else if / else chains
 *   - arithmetic with int
 *
 * Task:
 *   Ask the user for the speed limit and the recorded speed (km/h).
 *   Print the infraction level and fine amount.
 *
 *   Up to limit          : no fine
 *   1–20 km/h over       : light   — R$ 130.16
 *   21–50 km/h over      : medium  — R$ 195.23
 *   Above 50 km/h over   : severe  — R$ 880.41 + license suspension warning
 *
 *   Expected output:
 *   Speed limit (km/h): 60
 *   Recorded speed (km/h): 95
 *   Excess     : 35 km/h
 *   Infraction : Medium
 *   Fine       : R$ 195.23
 *
 */

#include <stdio.h>

int main() {

    // Variables
    int limit, speed, excess;

    // Input
    printf("Speed limit (km/h): ");
        scanf("%d", &limit);

    printf("Recorded speed (km/h): ");
        scanf("%d", &speed);

    // Calculation
    excess = speed - limit;

    // Output
    printf("Excess     : %d km/h\n", excess);

    // Conditions
    if (excess <= 0) {

        printf("Infraction : None\n");
        printf("Fine       : R$ 0.00\n");

    } else if (excess <= 20) {

        printf("Infraction : Light\n");
        printf("Fine       : R$ 130.16\n");

    } else if (excess <= 50) {

        printf("Infraction : Medium\n");
        printf("Fine       : R$ 195.23\n");

    } else {

        printf("Infraction : Severe\n");
        printf("Fine       : R$ 880.41\n");
        printf("Warning    : License suspension\n");
    }

    return 0;
}
