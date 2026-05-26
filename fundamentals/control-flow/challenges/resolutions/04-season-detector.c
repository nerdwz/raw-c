/*
 * Challenge 04 - Season Detector
 *
 * Practice:
 *   - switch / case
 *   - multiple cases mapping to same result
 *
 * Task:
 *   Ask the user for a month number (1–12).
 *   Print the corresponding season.
 *
 *   Dec–Feb : Summer
 *   Mar–May : Autumn
 *   Jun–Aug : Winter
 *   Sep–Nov : Spring
 *
 *   Expected output:
 *   Month: 7
 *   Season: Winter
 *
 */

#include <stdio.h>

int main() {
		
		//Variables.
		int mn;
		
		//Input.
    printf("Month number (1-12): ");
    	scanf("%d", &mn);
    	
    //Conditionals.	
    if (mn > 12 || mn < 1) {
    	printf("This is a not month.");
		} else {
			switch (mn) {
				case 12:
				case 1:
				case 2:
					printf("Season: Summer");
						break;
				
				case 3:
				case 4:
				case 5:
					printf("Season: Autumn");
						break;
				
				case 6:
				case 7:
				case 8:
					printf("Season: Winter");
						break;
				
				case 9:
				case 10:
				case 11:
					printf("Season: Spring");
						break;
			}
		}

    return 0;
}
