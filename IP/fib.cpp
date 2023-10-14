#include <iostream>
using namespace std;

int main() 
{
    int n{0};
    cout << "Enter a number: ";
    cin >> n;

    int num0 = 0;
    int num1 = 1;
    int num2;

    for (int i = 2; i <= n; i++)
    {
        num2 = num0 + num1;
        num0 = num1;
        num1 = num2;
    }
    cout << num2;
}