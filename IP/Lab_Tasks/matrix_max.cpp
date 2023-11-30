#include <iostream>
using namespace std;

int main() {
    int row = 2;
    int col = 4;

    int matrix[row][col] = 
    {
        {2, 3, 5, 2},
        {3, 8, 2, 2},
    };

    cout << "Matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int max_element = 0;
    int max_row = 0;
    int max_col = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] > max_element)
            {
                max_element = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    cout << "Max element: " << max_element << " at position [" << max_row+1 << "][" << max_col+1 << "]";

    return 0;
}