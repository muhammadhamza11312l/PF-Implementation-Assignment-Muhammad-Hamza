#include <stdio.h>

int main() {
    int n;

    printf("Enter a number n: ");
    scanf("%d", &n);

    if (n > 100) {
        printf("The value is greater than 100.\n");
    }

    // If n is not greater than 100, nothing happens.
    return 0;
}