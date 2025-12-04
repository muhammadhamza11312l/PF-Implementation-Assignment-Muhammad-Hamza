#include <iostream>
// This defines PI before the program compiles
#define PI 3.14159 

using namespace std;

int main() {
    float radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Formula: Area = PI * r^2
    area = PI * radius * radius;

    cout << "The Area of the circle is: " << area << endl;

    return 0;
}