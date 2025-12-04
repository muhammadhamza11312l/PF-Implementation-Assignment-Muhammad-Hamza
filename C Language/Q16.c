#include <stdio.h>

int main() {
    int a, b, c;
    int product;

    // Multiple assignment
    a = b = c = 3;

    product = a * b * c;

    printf("a: %d, b: %d, c: %d\n", a, b, c);
    printf("The product is: %d\n", product);

    return 0;
}