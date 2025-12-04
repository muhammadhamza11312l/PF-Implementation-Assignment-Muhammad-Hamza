#include <stdio.h>

int main() {
    // 1. Declare and initialize two variables of "int" type [cite: 17]
    int numberA = 15;
    int numberB = 26;

    // 2. Calculate the average
    // Note: We divide by 2.0 (a decimal) so the result includes the decimal part (e.g., 20.5 instead of 20)
    float averageVal = (numberA + numberB) / 2.0;

    // 3. Print the result on the screen [cite: 18]
    printf("First Number: %d\n", numberA);
    printf("Second Number: %d\n", numberB);
    printf("The Average is: %.2f\n", averageVal);

    return 0;
}