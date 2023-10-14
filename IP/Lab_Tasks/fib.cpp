#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of fibonacci elements: ";
    cin >> n;
    int fibonacci[n];

    fibonacci[0] = 0;
    fibonacci[1] = 1;
    
    for (int i = 2; i < n; i++)
    {
        fibonacci[i] = fibonacci[i-2] + fibonacci[i-1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "fibonacci[" << i << "]=" << fibonacci[i] << endl;
    }
}