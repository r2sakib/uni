#include <iostream>
using namespace std;

void bubbleSort(int arr[], int countarr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                // Swap corresponding counts
                int tempCount = countarr[j];
                countarr[j] = countarr[j + 1];
                countarr[j + 1] = tempCount;
            }
        }
    }
}

int main() {
    int arr[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 7};
    int newarr[10];
    int countarr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    newarr[0] = arr[0];
    countarr[0] = 1;

    int count = 1;
    for (int i = 1; i < 10; i++) {
        bool isUnique = true;
        for (int j = 0; j < count; j++) {
            if (newarr[j] == arr[i]) {
                isUnique = false;
                countarr[j]++;
                break; // Add break to exit loop early
            }
        }
        
        if (isUnique) {
            newarr[count] = arr[i];
            countarr[count] = 1; // Initialize count for new unique element
            count++;
        }
    }

    // Sort the newarr and countarr arrays using bubble sort
    bubbleSort(newarr, countarr, count);

    for (int i = 0; i < count; i++) {
        cout << newarr[i] << " occurs = " << countarr[i] << " times" << endl;
    }

    return 0;
}