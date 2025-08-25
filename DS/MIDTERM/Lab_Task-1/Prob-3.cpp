#include <iostream>
using namespace std;

void printOdd(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int start = 0;
    int end = 0;

    cout << "Enter starting point: ";
    cin >> start;
    cout << "Enter ending point: ";
    cin >> end;

    printOdd(start, end);
}