#include <iostream>
using namespace std;

int main() {
    float radius, area, circumference;
    const float PI = 3.14159; // Defining PI as a constant

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Formulas
    area = PI * radius * radius;       // Area = pi * r^2
    circumference = 2 * PI * radius;   // Circumference = 2 * pi * r

    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}