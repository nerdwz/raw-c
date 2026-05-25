/*
 * Challenge 02 - Speed Calculator
 *
 * Practice:
 *   - scanf with float and int
 *   - arithmetic (division)
 *   - formatted output with alignment
 *
 * Task:
 *   Ask the user for a distance (km) and time (hours).
 *   Print the average speed in km/h and m/s.
 *
 *   Expected output:
 *   Distance (km): 150
 *   Time (h): 2
 *   Speed: 75.00 km/h
 *   Speed: 20.83 m/s
 */

#include <stdio.h>

int main() {

	int h;
	float km, speed;

	printf("Distance (km): ");
		scanf("%f", &km);
	printf("Time (h): ");
		scanf("%d", &h);
	printf("Speed: %.2f km/h\n", km / h);
		speed = (km * 1000) / (h * 3600.0);
	printf("Speed: %.2f m/s\n", speed);

    return 0;
}
