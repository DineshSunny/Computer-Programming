// Dinesh Seveti
// CSCI 201 – Lab 9, Question 3
// Driver program for Calculator class.
// Purpose: Demonstrates Calculator with file or console input.

#include "Calculator.h"
#include <fstream>

int main() {
    Calculator calc;
    char choice;

    cout << "Read input from file (f) or keyboard (k)? ";
    cin >> choice;

    if (choice == 'f') {
        ifstream fin("input.txt");
        if (!fin) {
            cerr << "Error opening input.txt" << endl;
            return 1;
        }
        calc.run(fin);
    } else {
        cout << "Enter two numbers and an operator (+ or -): ";
        calc.run(cin);
    }

    calc.printResult();
    return 0;
}
