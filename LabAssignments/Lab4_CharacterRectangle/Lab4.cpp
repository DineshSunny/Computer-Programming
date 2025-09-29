// <Your Name>
// CSCI 201: Lab Assignment 4
// Objective: Read two integers (m and n) and a character from an input file,
// then generate an m x n rectangle of that character in an output file.
// Demonstrates nested for loops and file input/output.

#include <iostream>
#include <fstream>   // Required for file handling
using namespace std;

int main() {
    string inputFile, outputFile;  // Names of input and output files
    int m, n;                      // Dimensions of the rectangle
    char ch;                       // Character used to draw the rectangle

    // Prompt user for input and output file names
    cout << "Enter the input file name: ";
    cin >> inputFile;

    cout << "Enter the output file name: ";
    cin >> outputFile;

    // Open the input file for reading
    ifstream fin(inputFile.c_str());
    // Open the output file for writing
    ofstream fout(outputFile.c_str());

    // Check if input file opened successfully
    if (!fin) {
        cerr << "Error opening input file." << endl;
        return 1;  // Exit with error code
    }

    // Check if output file opened successfully
    if (!fout) {
        cerr << "Error opening output file." << endl;
        return 1;  // Exit with error code
    }

    // Read values m, n, and character ch from the input file
    fin >> m >> n >> ch;

    // Outer loop → runs 'm' times (rows)
    for (int i = 0; i < m; i++) {
        // Inner loop → runs 'n' times (columns)
        for (int j = 0; j < n; j++) {
            fout << ch;  // Write character to output file
        }
        fout << endl;  // Move to next line after finishing one row
    }

    // Confirmation message on screen
    cout << "Pattern written to " << outputFile << endl;

    // Close files
    fin.close();
    fout.close();

    return 0;  // Exit successfully
}
