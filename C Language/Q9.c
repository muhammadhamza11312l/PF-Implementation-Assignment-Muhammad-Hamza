#include <stdio.h>

int main() {
    // Declaring four numbers
    int n1 = 10, n2 = 55, n3 = 30, n4 = 45;
    int max;

    // Assuming first is max, then comparing with others
    max = n1;
    
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    if (n4 > max) {
        max = n4;
    }

    printf("The maximum number is: %d\n", max);
    return 0;
}