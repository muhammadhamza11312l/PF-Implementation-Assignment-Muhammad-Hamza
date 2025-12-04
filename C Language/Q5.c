#include <stdio.h>

int main() {
    int input1, input2;
    int sumResult, prodResult;

    // Getting input from user
    printf("Enter first number: ");
    scanf("%d", &input1); // & is used to get the memory address
    printf("Enter second number: ");
    scanf("%d", &input2);

    // Processing
    sumResult = input1 + input2;
    prodResult = input1 * input2;

    printf("Sum: %d\n", sumResult);
    printf("Product: %d\n", prodResult);

    return 0;
}