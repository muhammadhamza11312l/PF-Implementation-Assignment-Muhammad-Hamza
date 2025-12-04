#include <iostream>
using namespace std;

int main() {
    int val1 = 10;
    int val2 = 20;
    int temp;

    cout << "Before swapping: val1 = " << val1 << ", val2 = " << val2 << endl;

    // Swapping logic
    temp = val1; // Save val1
    val1 = val2; // Overwrite val1 with val2
    val2 = temp; // Restore old val1 into val2

    cout << "After swapping:  val1 = " << val1 << ", val2 = " << val2 << endl;

    return 0;
}