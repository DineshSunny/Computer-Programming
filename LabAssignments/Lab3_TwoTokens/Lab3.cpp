// <Your Name>
// CSCI 201: Lab Assignment 3

#include <iostream>
using namespace std;

int main() {
    float total, num;
    char op;

    cout << "Welcome to your friendly neighborhood accumulator!" << endl;
    cout << "Please input your expression, starting with an operand" << endl;
    cout << "and type in '=' when completed." << endl;

    cin >> total;  // first operand

    while (true) {
        cin >> op;  // operator

        if (op == '=') {
            cout << "The answer is " << total << endl;
            cout << "Thank-you for using your friendly neighborhood accumulator!" << endl;
            break;
        }

        cin >> num; // next operand

        if (op == '+') {
            total += num;
        } else if (op == '-') {
            total -= num;
        }
    }

    return 0;
}
