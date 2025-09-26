#include <stdio.h>

int main() {
    int calories, fatGrams, caloriesFromFat;
    float percentage;

    printf("Welcome to the Food Fat Checker!\n");
    printf("Let's find out how much of your food's calories come from fat.\n\n");

    // Asking for calories
    printf("Please enter the total number of calories in the food: ");
    scanf("%d", &calories);

    // Asking for fat grams
    printf("Now enter the number of fat grams in the food: ");
    scanf("%d", &fatGrams);

    // Input validation
    if (calories < 0 || fatGrams < 0) {
        printf("\nError: Calories and fat grams must be non-negative values.\n");
        return 0;
    }

    caloriesFromFat = fatGrams * 9;

    if (caloriesFromFat > calories) {
        printf("\nError: The calories from fat (%d) are more than the total calories (%d).\n", caloriesFromFat, calories);
        printf("Please re-check the numbers you entered.\n");
        return 0;
    }

    // Calculate percentage
    percentage = ((float)caloriesFromFat / calories) * 100;

    printf("\nHere are the results:\n");
    printf("   Total calories: %d\n", calories);
    printf("   Calories from fat: %d\n", caloriesFromFat);
    printf("   Percentage of calories from fat: %.2f%%\n", percentage);

    if (percentage < 30) {
        printf("\nGood news! This food is considered LOW in fat.\n");
    } else {
        printf("\nHeads up! This food has a higher fat percentage.\n");
    }

    printf("\nThanks for using the Food Fat Checker! Stay healthy!\n");

    return 0;
}
