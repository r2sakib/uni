
#include <iostream>
using namespace std;

/**  
 * This program takes an integer input from the user and checks if it is divisible by 2, 5, and 11.
 * If the number is divisible by all three, it prints a message saying so. Otherwise, it prints a message saying it is not.
*/

int main(){
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num % 2 == 0 && num % 5 == 0 && num % 11 == 0) {
        cout << num << " is divisible by 2, 5, 11";
    }
    else {
        cout << num << " is not divisible by 2, 5, 11";
    }
}