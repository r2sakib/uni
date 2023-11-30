#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 4;

    int matrix[row][col] = 
    {
        {2, 3, 5, 7},
        {1, 2, 3, 5},
        {2, 4, 6, 8},
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
    
    return 0;
}