#include <iostream>
using namespace std;

int main() {
    float fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Formula: C = 5/9 * (F - 32)
    // We use 5.0 / 9.0 so the program knows we want decimal results
    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}