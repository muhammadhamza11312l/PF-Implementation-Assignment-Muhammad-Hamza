#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swapping logic
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:  a = %d, b = %d\n", a, b);

    return 0;
}