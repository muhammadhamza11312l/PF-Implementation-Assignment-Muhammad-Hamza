#include <stdio.h>

int main() {
    float miles = 2.5;
    float kilometers;

    // Conversion formula
    kilometers = miles * 1.609;

    printf("%.2f miles is equal to %.4f kilometers.\n", miles, kilometers);
    return 0;
}