#include <stdio.h>

int main() {
    int ageYears, ageMonths;

    printf("Enter your age in years: ");
    scanf("%d", &ageYears);

    // Logic
    ageMonths = ageYears * 12;

    printf("Your age in months is: %d\n", ageMonths);
    return 0;
}