// Find which is greatest among a,b,c (use if-else)

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c) {
        cout << a << " is the greatest";
    }
    else if (b > a && b >c) {
        cout << b << " is the greatest";
    }
    else{
        cout << c << " is the greatest";
    }
}
