#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int speeds[n] = {12, 23, 15, 18, 30, 11};
    // int speeds[n] = {11, 12, 15, 18, 23, 30};

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (speeds[j] > speeds[j+1]) {
                int temp = speeds[j];
                speeds[j] = speeds[j+1];
                speeds[j+1] = temp;
            }
        }
    }

    int minDiff = speeds[2] - speeds[0];

    int selected[3];
    selected[0] = speeds[0];
    selected[1] = speeds[1];
    selected[2] = speeds[2];

    for (int i = 0; i < n-2; i++) {
        int diff = speeds[i+2] - speeds[i];

        if (diff < minDiff) {
            minDiff = diff;
            selected[0] = speeds[i];
            selected[1] = speeds[i+1];
            selected[2] = speeds[i+2];
        }
    }

    cout << "Selected Athelets: ";
    for (int i = 0; i < 3; i++) {
        cout << selected[i] << " ";
    }
    cout << ".Minimum Difference: " << minDiff;

    return 0;
}