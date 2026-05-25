/*
 * Challenge 11 - Time Breakdown
 *
 * Practice:
 *   - scanf with int
 *   - integer division and modulo
 *   - formatted output with alignment
 *
 * Task:
 *   Ask the user for a duration in seconds.
 *   Print it broken down into weeks, days, hours, minutes, and seconds.
 *
 *   Use integer division / and modulo %
 *
 *   Expected output:
 *   Seconds: 1000000
 *   Weeks  : 1
 *   Days   : 4
 *   Hours  : 13
 *   Minutes: 46
 *   Seconds: 40
 */

#include <stdio.h>

int main() {

    int totalSeconds;
    int weeks, days, hours, minutes, seconds;

    printf("Seconds: ");
    scanf("%d", &totalSeconds);

    weeks = totalSeconds / 604800;
    totalSeconds = totalSeconds % 604800;

    days = totalSeconds / 86400;
    totalSeconds = totalSeconds % 86400;

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("\n--- Time Breakdown ---\n");

    printf("%-8s : %d\n", "Weeks", weeks);
    printf("%-8s : %d\n", "Days", days);
    printf("%-8s : %d\n", "Hours", hours);
    printf("%-8s : %d\n", "Minutes", minutes);
    printf("%-8s : %d\n", "Seconds", seconds);

    return 0;
}