#include <iostream>
using namespace std;

int main() {
    char countries[5][20] = {"Bangladesh", "Spain", "USA", "New Zeland", "Japan"};

    for (int i = 0; i < 5; i++)
    {
        cout << countries[i] << endl;
    }    

    return 0;
}