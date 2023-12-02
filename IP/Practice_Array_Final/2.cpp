#include <iostream>
using namespace std;

int main() {
    float arr[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter number: ";
        cin >> arr[i];
    }

    float sum = 0;
    for (int i = 0; i < 4; i++)
    {
        sum += arr[i];
    }

    float avg = sum/4;

    float mult = 1;
    for (int i = 0; i < 4; i++)
    {
        mult = mult * arr[i];
    }

    cout << "Summation: " << sum << endl;
    cout << "Average: " << avg << endl;
    cout << "Multiplication: " << mult;

    return 0;
}