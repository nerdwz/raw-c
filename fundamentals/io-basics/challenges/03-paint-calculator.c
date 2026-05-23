/*
 * Challenge 03 - Paint Calculator
 *
 * Practice:
 *   - scanf with float and int
 *   - arithmetic (multiplication, division)
 *   - formatted output
 *
 * Task:
 *   Ask the user for a wall's width and height,
 *   and how many square meters one paint can covers.
 *   Print how many cans are needed.
 *
 *   Expected output:
 *   Wall width (m): 8
 *   Wall height (m): 3
 *   Coverage per can (m2): 6
 *   Cans needed: 4.00
 */

#include <stdio.h>

int main() {

	int width, height, cover;
	float cans;
	

	printf("Wall width (m): ");
		scanf("%d", &width);
	printf("Wall height (m): ");
		scanf("%d", &height);
	printf("Coverage per can (m2): ");
	 	scanf("%d", &cover);
	 	
	 	cans = (float) (height * width) / cover;
	 	
	printf("Cans needed: %.2f", cans);

    return 0;
}
