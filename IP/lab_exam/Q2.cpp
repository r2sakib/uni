#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two numbers: ";
    int a, b;
    cin >> a >> b;

    cout << "Before swap" << endl;
    cout << "a: " << a << ", " << "b: " << b << endl;

    int *aPtr;
    aPtr = a;
    a = b;
    b = aPtr;


    cout << "a: " << a << ", " << "b: " << b;
}