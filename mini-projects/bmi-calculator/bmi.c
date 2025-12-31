#include <stdio.h>
#include <stdlib.h>

// Function to calculate BMI
float calculateBMI(float weight, float height) {
    return weight / (height * height);
}

// Function to categorize BMI
void displayBMICategory(float bmi) {
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5) {
        printf("Category: Underweight\n");
        printf("Explanation: You are below the normal weight range. Consider a balanced diet to gain weight.\n");
    }
    else if (bmi >= 18.5 && bmi < 25.0) {
        printf("Category: Normal weight\n");
        printf("Explanation: You are within the normal weight range. Maintain your current lifestyle for good health.\n");
    }
    else if (bmi >= 25.0 && bmi < 30.0) {
        printf("Category: Overweight\n");
        printf("Explanation: You are above the normal weight range. Consider regular exercise and a healthy diet.\n");
    }
    else {
        printf("Category: Obese\n");
        printf("Explanation: Your BMI indicates obesity. It is advisable to consult a healthcare professional.\n");
    }
}

// Function for input validation - ensures positive float input
float getPositiveInput(const char *prompt) {
    float value;
    do {
        printf("%s", prompt);
        if (scanf("%f", &value) != 1) {
            while (getchar() != '\n'); // Clear invalid input
            printf("Invalid input. Please enter a number.\n");
            value = -1.0f; // Force loop retry
        }
        else if (value <= 0) {
            printf("Please enter a positive value.\n");
        }
    } while (value <= 0);
    return value;
}

int main() {
    printf("====================================\n");
    printf("      BMI Calculator Application     \n");
    printf("====================================\n\n");

    // Gather user input for weight and height
    float weight = getPositiveInput("Enter your weight in kilograms (e.g., 70.5): ");
    float height = getPositiveInput("Enter your height in meters (e.g., 1.75): ");

    // Calculate BMI
    float bmi = calculateBMI(weight, height);

    // Display BMI category and explanation
    displayBMICategory(bmi);

    printf("\nThank you for using the BMI Calculator!\n");

    return 0;
}
