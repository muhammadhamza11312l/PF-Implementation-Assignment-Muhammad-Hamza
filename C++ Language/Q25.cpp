#include <iostream>
#include <cmath> // Required for sqrt() function
using namespace std;

int main() {
    double a, b, c, s, area;

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    // Calculate Semi-perimeter (s)
    s = (a + b + c) / 2;

    // Calculate Area using Heron's Formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}