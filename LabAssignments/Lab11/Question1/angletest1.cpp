#include <iostream>
#include "angle.h"
using namespace std;

/**
 * @brief Lab 11 Q1: Demonstrates addresses of stack variables, pointers, and objects.
 */
int main() {
    int i1; int *ip1; int i2;
    angle a1, a2;
    float x1; double x2;
    int i3; int A[6];
    float *fp1; angle *ap1; double *dp1;

    cout << "Addresses of variables:" << endl;
    cout << "&i1 = " << &i1 << endl;
    cout << "&ip1 = " << &ip1 << endl;
    cout << "&i2 = " << &i2 << endl;
    cout << "&a1 = " << &a1 << endl;
    cout << "&a2 = " << &a2 << endl;
    cout << "&x1 = " << &x1 << endl;
    cout << "&x2 = " << &x2 << endl;
    cout << "&i3 = " << &i3 << endl;
    cout << "&A = " << &A << endl;
    cout << "&fp1 = " << &fp1 << endl;
    cout << "&ap1 = " << &ap1 << endl;
    cout << "&dp1 = " << &dp1 << e
