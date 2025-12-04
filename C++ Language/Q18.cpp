#include <iostream>
using namespace std;

int main() {
    float vi, t, s, a;

    // Assigning values (hardcoded as per instruction "assign values")
    vi = 20.0; // initial velocity
    t = 10.0;  // time
    a = 5.0; // accelration

    // Calculating distance
    s = vi * t + (1/2)*a*t*t;

    cout << "Initial Velocity (vi) : " << vi << endl;
    cout << "Time (t) : " << t << endl;
    cout << "Accelration (a) : " << a << endl;
    cout << "Calculated Distance (s): " << s << endl;

    return 0;
}