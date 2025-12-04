#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Use 5.0 / 9.0 to ensure floating point division
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    // %.2f prints only 2 decimal places
    printf("Temperature in Celsius: %.2f\n", celsius);
    return 0;
}