/*
 * Exercise 07 - switch-multicase
 *
 * Practice:
 *   - switch with char input
 *   - grouping cases with fallthrough
 *
 * Task:
 *   Read a single character representing a vowel or consonant.
 *   Print whether it is a vowel or a consonant.
 *   Consider only lowercase letters a-z.
 *   If the character is not a letter, print an error message.
 *
 *   Expected output (example):
 *   Enter a letter: e
 *   Vowel.
 */

#include <stdio.h>

int main() {
	
		// Variables
    char letter;

    // Input
    printf("Enter a letter: ");
    scanf("%c", &letter);

    // Validation
    if ((letter >= 'a' && letter <= 'z') ||
        (letter >= 'A' && letter <= 'Z')) {

        // Switch
        switch(letter) {

            case 'a':
            case 'A':

            case 'e':
            case 'E':

            case 'i':
            case 'I':

            case 'o':
            case 'O':

            case 'u':
            case 'U':
                printf("Vowel.");
                break;

            default:
                printf("Consonant.");
                break;
        }

    } else {
        printf("Error: This is not a letter.");
    }
    
    return 0;
}
