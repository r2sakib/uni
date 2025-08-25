#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int newarr[5+8];

    for (int i = 0; i < 5; i++) {
        newarr[i] = arr1[i];
    }

    for (int i = 5; i < 5+8; i++) {
        newarr[i] = arr2[i-5];
    }

    for (int i = 5+8-1; i >= 0; i--) {
        cout << newarr[i] << " ";
    }
    
    return 0;
}