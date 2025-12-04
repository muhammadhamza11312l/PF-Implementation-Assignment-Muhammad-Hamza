#include <iostream>
using namespace std;

int main() {
    int a, b, c, disc;

    cout << "Enter values for a, b, and c: ";
    cin >> a >> b >> c;

    // Calculation: b*b is b squared
    disc = (b * b) - (4 * a * c);

    cout << "The discriminant is: " << disc << endl;

    return 0;
}