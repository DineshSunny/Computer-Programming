#include <iostream>
using namespace std;

/**
 * @brief Lab 11 Q4: Demonstrates exchange functions (by reference and by pointer).
 */

/**
 * @brief Exchanges two integers using references.
 * @param pi First integer
 * @param pj Second integer
 */
void exchange_ref(int &pi, int &pj) {
    int temp = pi;
    pi = pj;
    pj = temp;
}

/**
 * @brief Exchanges two integers using pointers.
 * @param pi Pointer to first integer
 * @param pj Pointer to second integer
 */
void exchange_ptr(int *pi, int *pj) {
    int temp = *pi;
    *pi = *pj;
    *pj = temp;
}

int main() {
    int i1 = 5, i2 = 10;

    cout << "Before exchange: i1=" << i1 << ", i2=" << i2 << endl;
    exchange_ref(i1, i2);
    cout << "After exchange (by reference): i1=" << i1 << ", i2=" << i2 << endl;

    exchange_ptr(&i1, &i2);
    cout << "After exchange (by pointer): i1=" << i1 << ", i2=" << i2 << endl;

    return 0;
}
