// Dinesh Seveti
// CSCI 201 – Lab 9, Question 1
// Driver program for Calculator class.
// Allows user to choose between console input or file input.

#include "calculator.h"
#include <fstream>

int main() {
    Calculator calc;
    char choice;

    cout << "Enter 'c' for console input or 'f' for file input: ";
    cin >> choice;

    if (choice == 'f') {
        ifstream fin("input.txt");
        if (!fin) {
            cerr << "Error: cannot open input.txt" << endl;
            return 1;
        }
        calc.run(fin);
    } else {
        cout << "Enter two numbers and an operator (+ or -): ";
        calc.run(cin);
    }

    return 0;
}
