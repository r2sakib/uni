#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int arr_1[2][2];
    int arr_2[2][2];
    int sum_arr[2][2];

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            cout << "Enter element " << row + 1 << col + 1 << " of matrix 1: ";
            cin >> arr_1[row][col];
        }
    }

    cout << endl;

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            cout << "Enter element " << row + 1 << col + 1 << " of matrix 2: ";
            cin >> arr_2[row][col];
        }
    }

    cout << endl;

    cout << "First matrix" << endl;
    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            cout << arr_1[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl << "Second matrix" << endl;
    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            cout << arr_2[row][col] << " ";
        }
        cout << endl;
    }

    cout << endl << "Addition of two matrices" << endl;
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            sum_arr[row][col] = arr_1[row][col] + arr_2[row][col];
            cout << sum_arr[row][col] << " ";
        }
        cout << endl;
    }

    // cout << "Sum matrix";

    return 0;
}