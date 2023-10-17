#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        int value;
        cout << "Enter value " << i << ": ";
        cin >> value;
        sum += value;
    }

    cout << "Average: " << sum / 5;
}