#include <iostream>
using namespace std;

int main()
{
    int lines;
    cout << "Enter number of line: ";
    cin >> lines;

    for (int i = 1; i <= lines; i++)
    {
        for (int j = i; j <= lines; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}