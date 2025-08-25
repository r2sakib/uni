#include <iostream>
using namespace std;

int main() {
    int arr [10] = {8,4,6,1,6,9,6,1,9,8};

    int input;
    cout << "Input a number to search: ";
    cin >> input;

    int count = 0;
    for (int i : arr) {
        if (i == input) {
            count++;
        }
    }

    cout << "The number occurs " << count << " times in the array";
    
    
    return 0;
}