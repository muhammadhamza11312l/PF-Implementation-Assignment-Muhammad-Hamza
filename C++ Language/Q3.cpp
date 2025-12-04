#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    // Assigning values via assignment statement
    a = 50;
    b = 100;

    cout << "Before Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swapping logic
    temp = a; // Store a in temp
    a = b;    // Move b into a
    b = temp; // Move original a (from temp) into b

    cout << "After Swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}