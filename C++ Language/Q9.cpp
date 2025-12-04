#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    int maxNumber;

    cout << "Enter four numbers: ";
    cin >> n1 >> n2 >> n3 >> n4;

    // Assume the first number is the maximum initially
    maxNumber = n1;

    // Check if others are bigger
    if (n2 > maxNumber) {
        maxNumber = n2;
    }
    if (n3 > maxNumber) {
        maxNumber = n3;
    }
    if (n4 > maxNumber) {
        maxNumber = n4;
    }

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}