#include <iostream>
#include "Fraction.h"
using namespace std;

/**
 * @brief Driver program to test the Fraction class.
 */
int main() {
    Fraction f1, f2;

    cout << "Enter first fraction (a/b): ";
    f1.read(cin);

    cout << "Enter second fraction (a/b): ";
    f2.read(cin);

    cout << "You entered: ";
    f1.write(cout); cout << " and ";
    f2.write(cout); cout << endl;

    if (f1.isEqual(f2)) {
        cout << "The fractions are equal." << endl;
    } else {
        cout << "The fractions are not equal." << endl;
    }

    cout << "Simplifying fractions:" << endl;
    f1.simplify();
    f2.simplify();
    cout << "Fraction 1 simplified = "; f1.write(cout); cout << endl;
    cout << "Fraction 2 simplified = "; f2.write(cout); cout << endl;

    return 0;
}
