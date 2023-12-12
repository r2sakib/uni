#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "Before swap" << endl;
    cout << "Num 1: " << a << ", " << "Num 2: " << b << endl;

    int empty;
    empty = a;
    a = b;
    b = empty;

    cout << "After swap" << endl;
    cout << "Num 1: " << a << ", " << "Num 2: " << b;

}