// Dinesh Seveti
// CSCI 201 – Lab 9, Question 2
// Header file for ColorCounter class
// Purpose: Count frequency of alphabetic characters in a string.

#ifndef COLORCOUNTER_H
#define COLORCOUNTER_H

#include <iostream>
#include <map>
#include <string>
using namespace std;

class ColorCounter {
private:
    string inputString;                // string to process
    map<char, int> colorCounts;        // map of character → count

public:
    // Constructor initializes the object with an input string
    ColorCounter(const string &s);

    // Run the counting algorithm
    void run();

    // Print the results to console
    void printColorCounts() const;
};

#endif
