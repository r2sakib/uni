#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    cout << "Enter number: ";
    int n;
    cin >> n;
    cout << "Nth fibonacci number: " << fib(10);

    return 0;
}