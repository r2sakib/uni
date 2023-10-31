#include <iostream>
using namespace std;

int main()
{
    int num, r, sum = 0, t;
    cout << "Enter a number: ";
    cin >> num;
    t = num;

    while (num != 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum*10 + r;
    }

    if (t == sum)
    {
        cout << t << " is a palindrome";
    }
    else
    {
        cout << t << " is not a palindrome";
    }
}