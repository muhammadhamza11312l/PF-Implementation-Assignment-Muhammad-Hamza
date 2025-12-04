#include <iostream>
using namespace std;

int main() {
    // 'const' makes sure PI cannot be changed later in the code
    const float PI = 3.14159;
    
    float radius, height, volume;

    cout << "Enter radius of the cylinder: ";
    cin >> radius;
    cout << "Enter height of the cylinder: ";
    cin >> height;

    // Formula: V = PI * r^2 * h
    volume = PI * (radius * radius) * height;

    cout << "The Volume of the cylinder is: " << volume << endl;

    return 0;
}