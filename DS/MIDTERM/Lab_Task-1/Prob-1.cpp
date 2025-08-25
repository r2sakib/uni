#include <iostream>
using namespace std;

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter num [" << i << "]: ";
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 10; i > 0; i--) {
        cout << arr[i] << " ";
    }
}