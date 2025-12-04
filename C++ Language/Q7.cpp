#include <iostream>
using namespace std;

int main() {
    int rollNo;
    float marksProg, marksComp, marksGraph;
    float total, average;

    // Getting student details
    cout << "Enter Roll No: ";
    cin >> rollNo;

    cout << "Enter marks for Programming Fundamentals: ";
    cin >> marksProg;

    cout << "Enter marks for Intro to Computing: ";
    cin >> marksComp;

    cout << "Enter marks for Computer Graphics: ";
    cin >> marksGraph;

    // Calculating Total
    total = marksProg + marksComp + marksGraph;

    // Calculating Average (divide by 3.0 to keep decimal precision)
    average = total / 3.0;

    cout << "-----------------------" << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}