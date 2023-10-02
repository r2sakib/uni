#include <iostream>
using namespace std;

// This code checks if a number is an integer or a float

int main() {
    float num;
    cout << "Enter a number: ";
    cin >> num;

    // If the number is an integer, the decimal part of the number will be 0
    // We can check this by comparing the integer part of the number with the original number
    if ((int) num == num) {
        cout << num << " is an integer";
    }
    else {
        cout << num << " is a float";
    }
}