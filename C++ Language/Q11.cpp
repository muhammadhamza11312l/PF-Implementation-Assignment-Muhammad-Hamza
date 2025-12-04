#include <iostream>
using namespace std;

int main() {
    // Declare and initialize two integer variables
    int num1 = 25;
    int num2 = 40;
    float average;

    // Calculate average
    // We divide by 2.0 to ensure the result is a float (decimal)
    average = (num1 + num2) / 2.0;

    cout << "Value 1: " << num1 << endl;
    cout << "Value 2: " << num2 << endl;
    cout << "The Average is: " << average << endl;

    return 0;
}