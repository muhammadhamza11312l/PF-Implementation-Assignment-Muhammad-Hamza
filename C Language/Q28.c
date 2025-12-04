#include <stdio.h>

int main() {
    int a, b, c, disc;

    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    disc = (b * b) - (4 * a * c);

    printf("The discriminant is: %d\n", disc);

    return 0;
}