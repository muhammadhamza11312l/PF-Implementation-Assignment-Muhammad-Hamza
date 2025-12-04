#include <stdio.h>

int main() {
    float vi, t, s, a;

    printf("Enter initial velocity (vi): ");
    scanf("%f", &vi);

    printf("Enter time (t): ");
    scanf("%f", &t);

    printf("Enter accelration (a): ");
    scanf("%f", &a);

    // Calculating distance (s = vi * t + 1 / 2 * a * t * t)
    s = (vi * t)+(1/2*a*t*t);

    printf("The distance (s) is: %.2f\n", s);

    return 0;
}