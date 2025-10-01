#include <iostream>
#include "angle.h"
using namespace std;

/**
 * @brief Lab 11 Q6: Demonstrates dynamic allocation and modifying object with pointers.
 */
int main() {
    angle *aptr = new angle(30, 15, 50);

    cout << "Original angle: ";
    aptr->write(cout);
    cout << endl;

    // Using dereference (*) and dot operator
    (*aptr).setminute(17);
    (*aptr).setsecond(45);
    cout << "After (*aptr).set...: ";
    aptr->write(cout);
    cout << endl;

    // Using arrow (->) operator
    aptr->setminute(23);
    aptr->setsecond(59);
    cout << "After aptr->set...: ";
    aptr->write(cout);
    cout << endl;

    delete aptr;
    return 0;
}
