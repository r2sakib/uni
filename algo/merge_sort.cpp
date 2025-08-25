#include <iostream>
using namespace std;

void merge(int *arr, int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = 0;
    int c[high - low + 1];

    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k++] = arr[i++];
        }
        else {
            c[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        c[k++] = arr[i++];
    }

    while (j <= high) {
        c[k++] = arr[j++];
    }

    for (i = low; i <= high; i++) {
        arr[i] = c[i - low];
    }
}

void mergeSort(int *arr, int low, int high) {
    int mid = (low + high) / 2;
    if (low < high) {
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[] = {7, 1, 3, 11, 5, 2, 4, 9, 6};
    int n = 9;
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    mergeSort(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}