#include <iostream>
using namespace std;

int main() {
    int num;
    bool is_prime = true;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i < num; i++) {
        if (num%i==0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime == true) {
        cout << "Prime number";
    }
    else if (is_prime == false) {
        cout << "Not prime number";
    }
}