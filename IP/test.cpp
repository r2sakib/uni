#include <iostream>
using namespace std;

int main() {
    int test = 0;

    cout << "Enter number: ";
    cin >> test;

    if (test > 5) {
        cout << "The value is more than 5";
    }
    else if (test == 5) {
        cout << "The value is the same";
    }
    else {
        cout << "The value is less than 5";
    }
}
