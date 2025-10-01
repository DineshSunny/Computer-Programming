// Dinesh Seveti
// CSCI 201 – Lab 9, Question 3
// Header file for Calculator class
// Purpose: Provide declaration of calculator with operands and operator.

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
using namespace std;

class Calculator {
private:
    double operand1, operand2, result;  // operands and result
    char op;                            // operator (+ or -)

public:
    // Default constructor
    Calculator();

    // Run calculation by reading from input stream
    void run(istream &in);

    // Print the result of the last operation
    void printResult();
};

#endif
