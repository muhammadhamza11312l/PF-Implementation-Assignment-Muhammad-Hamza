#include <stdio.h>

int main() {
    int valA = 50;
    int valB = 100;
    int tempVal; // Variable to store value temporarily

    printf("Before Swap: valA = %d, valB = %d\n", valA, valB);

    // Swapping logic
    tempVal = valA; // Store 50 in temp
    valA = valB;    // Store 100 in valA
    valB = tempVal; // Store 50 in valB

    printf("After Swap:  valA = %d, valB = %d\n", valA, valB);
    return 0;
}