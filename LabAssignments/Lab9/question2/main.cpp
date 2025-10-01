// Dinesh Seveti
// CSCI 201 – Lab 9, Question 2
// Driver program for ColorCounter class.

#include "ColorCounter.h"

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Create object, run analysis, and print results
    ColorCounter counter(input);
    counter.run();
    counter.printColorCounts();

    return 0;
}
