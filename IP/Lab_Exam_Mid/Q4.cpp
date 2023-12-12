#include <iostream>
using namespace std;

int main()
{
    int num, r, sum = 0, org_num;
    cout << "Enter a number: ";
    cin >> num;
    org_num = num;

    while (num != 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum*10 + r;
    }

    if (org_num == sum)
    {
        cout << org_num << " is a palindrome";
    }
    else
    {
        cout << org_num << " is not a palindrome";
    }
}