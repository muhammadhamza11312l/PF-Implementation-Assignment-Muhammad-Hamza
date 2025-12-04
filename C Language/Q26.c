#include <stdio.h>

int main() {
    float rupees = 12000.0;
    float dollars;
    float exchangeRate = 60.0;

    dollars = rupees / exchangeRate;

    printf("%.2f Rupees is equal to %.2f Dollars.\n", rupees, dollars);

    return 0;
}