#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, int &comparisons, int &swaps) {
    comparisons = 0;
    swaps = 0;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            comparisons++;
            arr[j + 1] = arr[j];
            swaps++;
            j = j - 1;
        }
        arr[j + 1] = key;
        swaps++;
    }
}

int main() {
    int arr[] = {92, 82, 21, 16, 18, 95, 25, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisons, swaps;

    insertionSort(arr, n, comparisons, swaps);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Number of comparisons: " << comparisons << endl;
    cout << "Number of swaps: " << swaps << endl;

    return 0;
}