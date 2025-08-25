// Bubble Sort
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    cout << "Enter numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int n = sizeof(arr)/sizeof(int);

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                swapped = true;
            }
            if (!swapped) {
                break;
            }
        }
    }

    for (int num : arr) {
        cout << num << " ";
    }
    
    
    return 0;
}