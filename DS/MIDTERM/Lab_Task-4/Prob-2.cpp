// Binary search
#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
    if (high >= low) {

        int mid = (high + low) /2;

        if (array[mid] == x) {
            return mid;
        }

        if (x > array[mid]) {
            return binarySearch(array, x, mid+1, high);
        }

        return binarySearch(array, x, low, mid-1);
    }

    return -1;
}

int main() {
    int array[] = {3, 4, 5, 6, 7, 8, 9};
    int x = 10;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element is found at " << result;
      
    return 0;
}