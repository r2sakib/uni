#include <iostream>
using namespace std;

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter num [" << i << "]: ";
        cin >> arr[i];
    }

    int odd = 0;
    int even = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << odd << " odd numbers" << endl;
    cout << even << " even numbers";
}