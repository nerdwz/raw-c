/*
 * Challenge 02 - BMI Calculator
 *
 * Practice:
 *   - if / else if / else chains
 *   - float input and arithmetic
 *
 * Task:
 *   Ask the user for weight (kg) and height (m).
 *   Print the BMI and its classification.
 *
 *   BMI = weight / (height * height)
 *
 *   Underweight : below 18.5
 *   Normal      : 18.5 – 24.9
 *   Overweight  : 25.0 – 29.9
 *   Obese       : 30 or above
 *
 *   Expected output:
 *   Weight (kg): 70
 *   Height (m): 1.75
 *   BMI: 22.86
 *   Classification: Normal
 */
 
 #include <stdio.h>
	int main() {
		
		float w, h, bmi;
		
		printf("Weight: ");
			scanf("%f", &w);
		printf("Height: ");
			scanf("%f", &h);
			
		bmi = w / (h * h);
		
		printf("BMI: %.2f\n", bmi);
		if ( bmi < 18.5) {
			printf("Classification: Underweight");
		} else if (bmi <= 24.9) {
			printf("Classification: Normal");
		} else if (bmi <= 29.9) {
			printf("Classfication: Overweight");
		} else {
			printf("Classification: Obese");
		}
		
		return 0;
	}
