#include <iostream>
using namespace std;

/**
    * This program takes a character input from the user and determines whether it represents a male or female gender.
    * It does this by using a switch-case statement to check the input character against the characters 'M', 'm', 'F', and 'f'.
    * If the input character matches any of these, the program outputs the corresponding gender.
    * If the input character does not match any of these, the program outputs "Undefined".
*/

int main() {
    char gender;
    cout << "Enter a character: ";
    cin >> gender;

    // Using switch-case
    switch (gender) {
        case 'M':
            cout << "Male";
            break;
        case 'm':
            cout << "Male";
            break;
        case 'F':
            cout << "Female";
            break;
        case 'f':
            cout << "Female";
            break;
        default:
            cout << "Undefiend";
    }
    
    // Using if-else
    // if (gender == 'M' or gender == 'm') {
    //     cout << "Male";
    // }
    // else if (gender == 'F' or gender == 'f') {
    //     cout << "Female";
    // }
    // else {
    //     cout << "Undefiend";
    // }
}