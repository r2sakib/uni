#include <iostream>
using namespace std;

int main()
{
    int lines;
    cout << "Enter number of line: ";
    cin >> lines;

    for (int i = 1; i <= lines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}