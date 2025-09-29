// <Your Name>
// CSCI 201: Lab Assignment 3
// Objective: Implement a simple accumulator (primitive calculator)
// that processes operands and operators until '=' is entered.
// Only '+' and '-' operators are supported.

#include <iostream>
using namespace std;

int main() {
    float total, num;  // Stores the running total and the next number
    char op;           // Stores the operator (+, -, =)

    // Introduction message
    cout << "Welcome to your friendly neighborhood accumulator!" << endl;
    cout << "Please input your expression, starting with an operand" << endl;
    cout << "and type in '=' when completed." << endl;

    // Read the first operand (initial total)
    cin >> total;

    // Loop until '=' is encountered
    while (true) {
        cin >> op;  // Read the operator

        // Case 1: End of expression (exit loop)
        if (op == '=') {
            cout << "The answer is " << total << endl;
            cout << "Thank-you for using your friendly neighborhood accumulator!" << endl;
            break;  // Exit the loop
        }

        // Case 2: Operator is + or - (read next number and update total)
        cin >> num;  // Read next operand

        if (op == '+') {
            total += num;  // Add operand
        } else if (op == '-') {
            total -= num;  // Subtract operand
        }
    }

    return 0;  // Exit successfully
}
