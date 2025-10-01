// Dinesh Seveti
// CSCI 201 – Lab 9, Question 1
// Header file for Calculator class
// Purpose: Declare Calculator class with a run() method
// that can take input from either console or file.

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

class Calculator {
public:
    // Runs the calculator using the given input stream
    // Reads two operands and an operator (+ or -),
    // performs the calculation, and prints the result.
    void run(istream &in);
};

#endif
