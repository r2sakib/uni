#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter 2D array size: ";
    cin >> row >> col;

    float arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    float query;
    cout << endl << "Enter number to find: ";
    cin >> query;

    bool present = false;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == query)
            {
                present == true;
                break;
            }
        }
    }

    if (present)
    {
        cout << query << " present in the array";
    }
    else
    {
        cout << query << " not present in the array";
    }

    
}
