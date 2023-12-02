#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter 2D array size: ";
    cin >> row >> col;

    int mat[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << endl << "ENTERTED MATRIX:" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }

        cout << endl;
    }

    int matTrans[col][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matTrans[i][j] = mat[j][i];
        }
    }

    cout << endl << "TRANSPOSE MATRIX:" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matTrans[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
