#include <iostream>
using namespace std;

int main() {
    int ageYears, ageMonths;

    cout << "Enter your age in years: ";
    cin >> ageYears;

    // Calculation
    ageMonths = ageYears * 12;

    cout << "Your age in months is: " << ageMonths << endl;

    return 0;
}