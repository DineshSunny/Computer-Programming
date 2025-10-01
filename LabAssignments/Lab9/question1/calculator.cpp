// Dinesh Seveti
// CSCI 201 – Lab 9, Question 1
// Implementation file for Calculator class.

#include "calculator.h"

void Calculator::run(istream &in) {
    double a, b;
    char op;

    // Prompt user or file provides input
    in >> a >> b >> op;

    // Perform calculation based on operator
    if (op == '+') {
        cout << "Result: " << a + b << endl;
    } else if (op == '-') {
        cout << "Result: " << a - b << endl;
    } else {
        cout << "Unsupported operator" << endl;
    }
}
