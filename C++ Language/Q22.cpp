#include <iostream>
#include <string> // Required for handling text (strings)
using namespace std;

int main() {
    string name;
    int age;
    float height;
    char gender;

    cout << "Enter Name (first name only): ";
    cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Height (e.g., 5.9): ";
    cin >> height;

    cout << "Enter Gender (M/F): ";
    cin >> gender;

    // Printing the data
    cout << "\n--- Student Data ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Gender: " << gender << endl;

    return 0;
}