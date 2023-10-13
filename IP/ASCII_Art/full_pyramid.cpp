#include <iostream>
using namespace std;

int main()
{
    int lines;
    cout << "Enter number of lines: ";
    cin >> lines;

    for (int i = 1; i <= lines; i++)
    {
        for (int j = lines - 1; j >= i; j--)
        {
            cout << " ";
        }

        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            cout << "*";
        }

        cout << endl;
    }
}