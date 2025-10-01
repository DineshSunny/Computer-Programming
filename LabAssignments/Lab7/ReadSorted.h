// Dinesh Seveti
// CSCI 201: Lab Assignment 7
// ReadSorted.h
// Defines a class for verifying sortedness of numbers read from a file.

#ifndef READ_SORTED_H
#define READ_SORTED_H

#include <iostream>
#include <fstream>
using namespace std;

class ReadSorted {
public:
    // Reads numbers from file into arr up to maxSize
    // Returns: number of items read if sorted, -1 if unsorted, 0 if empty
    int readSortedArray(ifstream &fin, float arr[], int maxSize) {
        float value;
        int count = 0;

        // Read first value
        if (!(fin >> value)) {
            return 0; // empty file
        }
        arr[count++] = value;

        // Read remaining values
        while (fin >> value && count < maxSize) {
            if (value < arr[count - 1]) {
                return -1; // not sorted
            }
            arr[count++] = value;
        }

        return count; // number of items successfully read
    }

    // Display array contents
    void display(float arr[], int n, ostream &out = cout) {
        if (n == 0) {
            out << "File is empty!" << endl;
            return;
        }
        for (int i = 0; i < n; i++) {
            out << arr[i] << " ";
        }
        out << endl;
    }
};

#endif
