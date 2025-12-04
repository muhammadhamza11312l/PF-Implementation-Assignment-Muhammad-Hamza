#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum, product;

    // Get input from user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Calculations
    sum = num1 + num2;
    product = num1 * num2;

    // Print results
    cout << "The Sum is: " << sum << endl;
    cout << "The Product is: " << product << endl;

    return 0;
}