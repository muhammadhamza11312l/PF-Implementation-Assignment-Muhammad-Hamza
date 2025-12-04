#include <iostream>
using namespace std;

int main() {
    double number = 15.58971;
    int integralPart;
    double fractionalPart;

    // Cast to int to get the whole number
    integralPart = (int)number;

    // Subtract integer part from total to get the fraction
    fractionalPart = number - integralPart;

    cout << "Original Number: " << number << endl;
    cout << "Integral Part: " << integralPart << endl;
    cout << "Fractional Part: " << fractionalPart << endl;

    return 0;
}