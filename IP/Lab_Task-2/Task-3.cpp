#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter a number: ";
    cin >> input;

    int fib_num_1 = 0;
    int fib_num_2 = 1;
    int fib_num_3;

    cout << fib_num_1 << " " << fib_num_2 << " ";

    for (int i = 3; i <= input; i++)
    {
        fib_num_3 = fib_num_1 + fib_num_2;
        fib_num_1 = fib_num_2;
        fib_num_2 = fib_num_3;

        cout << fib_num_3 << " ";
    }
}