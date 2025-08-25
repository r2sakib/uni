#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int arr[7] = {1,4,3,6,9,1,2};
    int newarr[7];
    newarr[0] = arr[0];

    int count = 1;
    for (int i = 1; i < 7; i++) {
        bool isUnique = true;
        for (int j = 0; j < count; j++) {
            if (newarr[j] == arr[i]) {
                isUnique = false;
            }
        }
        
        if (isUnique) {
            newarr[count] = arr[i];
            count++;
        }
    }

    if (count < 7) {
        for (int i = 0; i < count; i++) {
            cout << newarr[i] << " ";
        }
    }
    else {
        cout << "Array already unique";
    }
    return 0;
}