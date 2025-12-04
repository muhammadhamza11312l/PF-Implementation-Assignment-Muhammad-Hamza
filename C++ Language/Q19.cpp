#include <iostream>
using namespace std;

int main() {
    int age, months, days;

    cout << "Enter your age in years: ";
    cin >> age;

    months = age * 12;
    days = age * 365; // Approximate days

    cout << "You are " << months << " months old." << endl;
    cout << "You are approx " << days << " days old." << endl;

    return 0;
}