#include <iostream>
using namespace std;

int main() {
    int a[5] = {2, 3, 5};

    cout << "0th element: " << a[0] << endl;
    cout << "1st element: " << a[1] << endl;
    cout << "2nd element: " << a[2] << endl << endl;

    int *pa = &a[1];
    cout << "0th element: " << *pa << endl;
    cout << "1st element: " << *(pa+1) << endl;
    cout << "2nd element: " << *(pa+2) << endl << endl;

    int *ptra = a;
    cout << "0th element: " << *ptra << endl;
    cout << "1st element: " << *(ptra+1) << endl;
    cout << "2nd element: " << *(ptra+2) << endl << endl;

    cout << "0th element: " << *a << endl;
    cout << "1st element: " << *(a+1) << endl;
    cout << "2nd element: " << *(a+2) << endl << endl;

    return 0;
}