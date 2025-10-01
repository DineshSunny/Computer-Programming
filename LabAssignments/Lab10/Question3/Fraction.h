#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

/**
 * @class Fraction
 * @brief A class to represent mathematical fractions in a/b format.
 */
class Fraction {
private:
    int numerator;    ///< The numerator of the fraction
    int denominator;  ///< The denominator of the fraction

    /**
     * @brief Helper function to compute GCD of two integers.
     * @param a First integer
     * @param b Second integer
     * @return Greatest common divisor of a and b
     */
    int gcd(int a, int b);

public:
    /**
     * @brief Default constructor. Initializes fraction to 0/1.
     */
    Fraction();

    /**
     * @brief Parameterized constructor.
     * @param num Numerator value
     * @param denom Denominator value (must not be zero)
     */
    Fraction(int num, int denom);

    /**
     * @brief Reads a fraction from input stream in the form a/b.
     * @param in Input stream
     */
    void read(istream& in);

    /**
     * @brief Writes a fraction to output stream in the form a/b.
     * @param out Output stream
     */
    void write(ostream& out) const;

    /**
     * @brief Returns the numerator.
     * @return Numerator value
     */
    int getNumerator() const;

    /**
     * @brief Returns the*
