#include <iostream>
using namespace std;

// This program computes the expression Z^5 + Z^7 + Z^9 + Z^4 - Z^3 * Z^2

int main() {
    int Z;
    cout << "Enter a number: ";
    cin >> Z;

    int Z5 = Z*Z*Z*Z*Z;
    int Z7 = Z*Z*Z*Z*Z*Z*Z;
    int Z9 = Z*Z*Z*Z*Z*Z*Z*Z*Z;
    int Z4 = Z*Z*Z*Z;
    int Z3 = Z*Z*Z;
    int Z2 = Z*Z;

    int result = Z5 + Z7 + Z9 + Z4 - Z3 * Z2;

    cout << "Result: " << result;
}