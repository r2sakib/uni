#include <iostream>
using namespace std;

int main() {
    int var = 5;

    switch (var) {
        case 0:
            cout << "value = 0";
            break;
        case 5:
            cout << "value = 5";
            break;
        case 10:
            cout << "value = 10";
            break;
        default:
            cout << "No match";
    }
}
