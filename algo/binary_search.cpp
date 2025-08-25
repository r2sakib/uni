#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target) {

    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (target == arr[mid]) {
            return mid;
        }
        if (target < arr[mid]) {
            return binarySearch(arr, left, mid-1, target);
        }
        else if (target > arr[mid]) {
            return binarySearch(arr, mid+1, right, target);
        }
    }
    return -1;
}

int main() {

    int n = 8;
    int arr[n] = {5, 7, 2, 5, 1, 10, 9, 4};
    int target = 33;
    int temp;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < (n-i); j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    cout << endl;
    int index = binarySearch(arr, 0, n, target);
    cout << index;
}
