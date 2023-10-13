#include <iostream>
using namespace std;

int main() {
    int lines;
    cout << "Enter number of lines";
    cin >> lines;

    for (int i = 1; i <= lines; i++) {
        for (int j = 2; j <= i; j++) {
            cout << " ";
        }

        for (int k = lines*2-1; k >= i*2-1; k--) {
            cout << "*";
        }
        
        cout << endl;
    }
}