#include <iostream>
using namespace std;

int main() {
    float mm, inches;

    cout << "Enter length in millimeters: ";
    cin >> mm;

    // 1 inch = 25.4 mm
    inches = mm / 25.4;

    cout << mm << " millimeters is equal to " << inches << " inches." << endl;

    return 0;
}