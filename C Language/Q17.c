#include <stdio.h>

int main() {
    double number = 15.58971;
    int integralPart;
    double fractionalPart;

    // Cast to int to get the whole number
    integralPart = (int)number;
    
    // Subtract the whole number from the original to get the fraction
    fractionalPart = number - integralPart;

    printf("Original Number: %f\n", number);
    printf("Integral Part: %d\n", integralPart);
    printf("Fractional Part: %f\n", fractionalPart);

    return 0;
}