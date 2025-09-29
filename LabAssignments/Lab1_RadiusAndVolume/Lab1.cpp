// <Your Name>
// CSCI 201: Lab Assignment 1
// Objective: Learn to create, compile, and run a simple C++ program in Unix.
// This program calculates the volume of a sphere given its radius.

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

// Constant for PI
const double PI = 3.14159265;

int main() {
    double radius, volume;  // Variables for radius input and calculated volume

    // Prompt user for radius
    cout << "Enter the radius of a sphere: ";
    cin >> radius;  // Read radius from user

    // Formula: volume = (4/3) * PI * r^3
    volume = 4.0 / 3.0 * PI * radius * radius * radius;

    // Display the result
    cout << "The sphere's volume is: " << volume << endl;

    return 0;  // Exit program successfully
}
