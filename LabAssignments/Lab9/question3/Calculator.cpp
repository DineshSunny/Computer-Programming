// Dinesh Seveti
// CSCI 201 – Lab 9, Question 3
// Implementation file for Calculator class.

#include "Calculator.h"

// Default constructor
Calculator::Calculator() : operand1(0), operand2(0), result(0), op('+') {}

// Read input and perform calculation
void Calculator::run(istream &in) {
    in >> operand1 >> operand2 >> op;

    if (op == '+') {
        result = operand1 + operand2;
    } else if (op == '-') {
        result = operand1 - operand2;
    } else {
        cout << "Unsupported operator." << endl;
    }
}

// Print the result
void Calculator::printResult() {
    cout << "Result: " << result << endl;
}
