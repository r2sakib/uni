#include <iostream>
using namespace std;

int main() {
    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    
    int B[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    cout << "A matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl << "B matrix" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    int add[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            add[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << endl << "Addition" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }

    int sub[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << endl << "Subtraction" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    int mult[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mult[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                mult[i][j] += A[i][k] * B[k][j];
            } 
        }
    }

    cout << endl << "Multiplication" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mult[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}