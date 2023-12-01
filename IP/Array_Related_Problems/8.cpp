#include <iostream>
using namespace std;

int main() {
    int years[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter year " << i+1 << ": ";
        cin >> years[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (years[i] % 400 == 0 || (years[i] % 4 == 0 and years[i] % 100 != 0)) 
        { // Checks if the year is divisible by 400 OR divisible by 4 but not 100
            cout << years[i] << " is a leap year " << endl;
        }
    }
       
    return 0;
}