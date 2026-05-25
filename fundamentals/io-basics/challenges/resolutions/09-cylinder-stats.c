/*
 * Challenge 09 - Cylinder Stats
 *
 * Practice:
 *   - scanf with float
 *   - arithmetic (volume and surface area formulas)
 *   - formatted output with alignment
 *
 * Task:
 *   Ask the user for radius and height of a cylinder.
 *   Print volume and surface area.
 *
 *   Volume = 3.14159 * radius * radius * height
 *   Surface = 2 * 3.14159 * radius * (radius + height)
 *
 *   Expected output:
 *   Radius: 3
 *   Height: 10
 *   Volume      : 282.74
 *   Surface area: 244.35
 */

#include <stdio.h>

int main() {

	
	double area, vol, rad, height;

	printf("Radius: ");
		scanf("%lf", &rad);
	printf("Height: ");
		scanf("%lf", &height);
		
	vol = 3.14159 * rad * rad * height;
	area = 2 * 3.14159 * rad * (rad + height);
	
	printf("Volume      : %.2lf\n", vol);
	printf("Surface area: %.2lf\n", area);

    return 0;
}