// Dinesh Seveti
// CSCI 201: Lab Assignment 5
// Objective: Draw a Vee-shaped ASCII figure of height h, thickness t, and character ch.

#include <iostream>
using namespace std;

// Function to print a character multiple times
void printChars(int num, char ch, ostream& output) {
    for (int i = 0; i < num; i++) {
        output << ch;
    }
}

int main() {
    int h, t;      // height and thickness
    char ch;       // character for drawing

    // Prompt user
    cout << "Enter height of Vee: ";
    cin >> h;
    cout << "Enter line thickness: ";
    cin >> t;
    cout << "Enter character: ";
    cin >> ch;

    // Generate the Vee
    for (int i = 0; i < h - 1; i++) {
        int gap1 = i;                      // spaces before first arm
        int dash1 = t;                     // thickness of arm
        int gap2 = 2 * (h - 1 - i);        // shrinking gap in the middle
        int dash2 = t;                     // thickness of other arm

        // Print line
        printChars(gap1, ' ', cout);
        printChars(dash1, ch, cout);
        printChars(gap2, ' ', cout);
        printChars(dash2, ch, cout);
        cout << endl;
    }

    // Last line (solid bottom of Vee)
    printChars(2 * t, ch, cout);
    cout << endl;

    return 0;
}
