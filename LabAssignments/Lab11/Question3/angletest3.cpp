#include <iostream>
using namespace std;

/**
 * @brief Lab 11 Q3: Demonstrates pointer arithmetic on ints and chars.
 */
int main() {
    int i1 = 10, i2 = 20;
    char a = 'a', b = 'b', c = 'c';
    int *pi = &i1;
    char *pa = &a, *pb = &b, *pc = &c;

    cout << "Initial values: i1=" << i1 << " i2=" << i2 << endl;

    // Difference between addresses of i2 and i1
    ptrdiff_t diff = &i2 - &i1;
    cout << "&i2 - &i1 = " << diff << endl;

    // Use pointer arithmetic to modify i2 through pi
    *(pi + diff) = 99;
    cout << "i2 after pointer arithmetic = " << i2 << endl;

    // Char pointer arithmetic
    cout << "Characters: " << a << " " << b << " " << c << endl;
    cout << "*(pb+1) = " << *(pb+1) << endl;
    cout << "*(pc-1) = " << *(pc-1) << endl;

    return 0;
}
