#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, s, area;

    printf("Enter the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate semi-perimeter
    s = (a + b + c) / 2;

    // Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}