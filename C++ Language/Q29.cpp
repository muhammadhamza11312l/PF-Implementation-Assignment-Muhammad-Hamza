#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number n: ";
    cin >> n;

    if (n > 100) {
        cout << "The value is greater than 100." << endl;
    }
    
    // If the number is not greater than 100, the program just ends.
    return 0;
}