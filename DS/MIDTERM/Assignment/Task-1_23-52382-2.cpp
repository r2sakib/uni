#include <iostream>
using namespace std;

void selectionSort(int arr[], int n, int &comparisons, int &swaps) {
    comparisons = 0;
    swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        int mIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[mIndex]) {
                mIndex = j;
            }
        }
        if (mIndex != i) {
            swap(arr[i], arr[mIndex]);
            swaps++;
        }
    }
}

int main() {
    int arr[] = {92, 82, 21, 16, 18, 95, 25, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisons, swaps;

    selectionSort(arr, n, comparisons, swaps);

    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << "Number of comparisons: " << comparisons << endl;
    cout << "Number of swaps: " << swaps << endl;

    return 0;
}