#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int product;

    // Assigning 3 to all variables at once
    a = b = c = 3;

    product = a * b * c;

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
    cout << "The product (3 * 3 * 3) is: " << product << endl;

    return 0;
}