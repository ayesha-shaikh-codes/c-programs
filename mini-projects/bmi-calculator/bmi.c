#include <stdio.h>
#include <stdlib.h>

// Function to calculate BMI
float calculateBMI(float weight, float height) {
    return weight / (height * height);
}

// Function to display BMI category
void displayBMICategory(float bmi) {
    printf("\nYour BMI is: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Category: Underweight\n");
        printf("Explanation: You are below the normal weight range. Consider a balanced diet to gain weight.\n");
    }
    else if (bmi < 25.0) {
        printf("Category: Normal weight\n");
         printf("Explanation: You are within the normal weight range. Maintain your current lifestyle for good health.\n");
    }
    else if (bmi < 30.0) {
        printf("Category: Overweight\n");
        printf("Explanation: You are above the normal weight range. Consider regular exercise and a healthy diet.\n");
    }
    else {
        printf("Category: Obese\n");
        printf("Explanation: Your BMI indicates obesity. It is advisable to consult a healthcare professional.\n");
    }
}

// Function for positive input
float getPositiveInput(const char *prompt) {
    float value;

    do {
        printf("%s", prompt);

        if (scanf("%f", &value) != 1) {
            while (getchar() != '\n');

            printf("Invalid input! Enter a numeric value.\n");
            value = -1;
        }
        else if (value <= 0) {
            printf("Please enter a positive value.\n");
        }

    } while (value <= 0);

    return value;
}

int main() {

    float weight, height, bmi;

    printf("====================================\n");
    printf("        BMI Calculator App\n");
    printf("====================================\n");

    // Weight input
    weight = getPositiveInput("Enter weight in kilograms: ");

    // Height input in centimeters
    height = getPositiveInput("Enter height in centimeters: ");

    // Convert cm to meters
    height = height / 100.0;

    // Calculate BMI
    bmi = calculateBMI(weight, height);

    // Display result
    displayBMICategory(bmi);

    printf("\nThank you for using BMI Calculator!\n");

    return 0;
}
