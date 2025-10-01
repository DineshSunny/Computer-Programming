// Dinesh Seveti
// CSCI 201: Lab Assignment 7
// mainReadSorted.cpp
// Driver program to test the ReadSorted class.

#include "ReadSorted.h"

int main() {
    float array1[20], array2[30];
    string inputFile;

    cout << "Enter the name of input file: ";
    cin >> inputFile;

    ifstream fin(inputFile);
    if (!fin) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    ReadSorted rs;

    // Test with array of size 20
    int N1 = rs.readSortedArray(fin, array1, 20);
    if (N1 == -1) {
        cout << "\nError! The file was not sorted!\n";
    } else {
        cout << "Array 1 contents: ";
        rs.display(array1, N1);
    }

    // Reset file stream for second test
    fin.clear();
    fin.seekg(0);

    // Test with array of size 30
    int N2 = rs.readSortedArray(fin, array2, 30);
    if (N2 == -1) {
        cout << "\nError! The file was not sorted!\n";
    } else {
        cout << "Array 2 contents: ";
        rs.display(array2, N2);
    }

    fin.close();
    return 0;
}
