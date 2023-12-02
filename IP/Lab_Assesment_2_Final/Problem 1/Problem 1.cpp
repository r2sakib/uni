#include <iostream>
using namespace std;

int main() {
    char countries[5][30];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter country name " << i+1 << ": ";
        cin.getline(countries[i], 30);
    }

    for (int i = 0; i < 5; i++)
    {
        cout << countries[i] << endl;
    }    
}
