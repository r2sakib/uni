#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {1, 2, 3, 6, 9};
    int arr2[8] = {1, 2, 4, 7, 6, 9, 10, 11};

    int newarr[5+8];

    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            if(arr1[i] == arr2[j]) {
                newarr[count] = arr1[i];
                count++;
                break;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        if (count > 0) {
            cout << newarr[i] << " ";
        }
        else {
            cout << "No common element!";
        }
    }

    
    
    return 0;
}