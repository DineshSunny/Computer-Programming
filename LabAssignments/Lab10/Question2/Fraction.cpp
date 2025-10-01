#include "Fraction.h"
#include <stdexcept>

/**
 * @brief Default constructor. Initializes to 0/1.
 */
Fraction::Fraction() : numerator(0), denominator(1) {}

/**
 * @brief Parameterized constructor with validation.
 */
Fraction::Fraction(int num, int denom) {
    if (denom == 0) throw runtime_error("Denominator cannot be zero.");
    numerator = num;
    denominator = denom;
}

/**
 * @brief Reads a fraction in a/b format.
 */
void Fraction::read(istream& in) {
    char slash;
    in >> numerator >> slash >> denominator;
    if (denominator == 0) throw runtime_error("Denominator cannot be zero.");
}

/**
 * @brief Writes a fraction in a/b format.
 */
void Fraction::write(ostream& out) const {
    out << numerator << "/" << denominator;
}

/**
 * @brief Returns numerator.
 */
int Fraction::getNumerator() const { return numerator; }

/**
 * @brief Returns denominator.
 */
int Fraction::getDenominator() const { return denominator; }

/**
 * @brief Sets numerator.
 */
void Fraction::setNumerator(int num) { numerator = num; }

/**
 * @brief Sets denominator, checking zero.
 */
void Fraction::setDenominator(int denom) {
    if (denom == 0) throw runtime_error("Denominator cannot be zero.");
    denominator = denom;
}

/**
 * @brief Compares two fractions using cross multiplication.
 */
bool Fraction::isEqual(const Fraction& other) const {
    return (numerator * other.denominator) == (other.numerator * denominator);
}

/**
 * @brief Helper function to compute gcd.
 */
int Fraction::gcd(int a, int b) {
    if (b == 0) return abs(a);
    return gcd(b, a % b);
}

/**
 * @brief Simplifies fraction to lowest terms.
 */
void Fraction::simplify() {
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    // normalize negative denominator
    if (denominator < 0) {
        denominator = -denominator;
        numerator = -numerator;
    }
}
