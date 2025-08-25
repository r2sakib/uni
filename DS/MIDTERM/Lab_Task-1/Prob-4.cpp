#include <iostream>
using namespace std;

int main() {
    int A[3][3] = {{12, 13, 14}, {15, 16, 17}, {18, 19, 20}};
    int B[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int C[3][3] = {{101, 104, 107}, {102, 105, 108}, {103, 106, 109}};

    int sum[3][3];

    for (int i = 0; i < 3; i++) {
        for  (int j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j] + C[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for  (int j = 0; j < 3; j++) {
            cout << sum[i][j] << " "; 
        }
        cout << endl;
    }
}