#include <stdio.h>

int main() {
    float mm, inches;

    printf("Enter length in millimeters: ");
    scanf("%f", &mm);

    // 1 inch = 25.4 mm
    inches = mm / 25.4;

    printf("%.2f millimeters is equal to %.2f inches.\n", mm, inches);

    return 0;
}