// Dinesh Seveti
// CSCI 201 – Lab 9, Question 2
// Implementation file for ColorCounter class.

#include "ColorCounter.h"
#include <cctype> // for tolower()

// Constructor
ColorCounter::ColorCounter(const string &s) : inputString(s) {}

// Count only alphabetic characters
void ColorCounter::run() {
    for (char c : inputString) {
        if (isalpha(c)) {                 // consider only letters
            c = tolower(c);               // normalize to lowercase
            colorCounts[c]++;             // increment count
        }
    }
}

// Print results in map order
void ColorCounter::printColorCounts() const {
    cout << "Character frequencies:" << endl;
    for (auto &p : colorCounts) {
        cout << p.first << ": " << p.second << endl;
    }
}
