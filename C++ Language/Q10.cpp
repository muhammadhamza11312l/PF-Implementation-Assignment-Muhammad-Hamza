#include <iostream>
using namespace std;

int main() {
    float miles = 2.5;
    float kilometers;
    
    // 1 mile = 1.609 kilometers
    kilometers = miles * 1.609;

    cout << miles << " miles is equal to " << kilometers << " kilometers." << endl;

    return 0;
}