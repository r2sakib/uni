#include <iostream>
using namespace std;

void swap(int *a, int *b, int *c)
{
    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
    cout << "c: " << *c << endl;

    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;

    cout << "After swap" << endl;
    cout << "a: " << *a << endl;
    cout << "b: " << *b << endl;
    cout << "c: " << *c << endl;
}

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    swap(&a, &b, &c);
    return 0;
}