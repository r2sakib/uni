#include <iostream>
using namespace std;

int main() {
    char str[12] = "Bangladeshi";

    for (int i = 0; i < 6; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << " ";
        }

        for (int k = 0; k < (2*i+1); k++)
        {
            cout << str[k];
        }

        cout << endl;
    }

    return 0;
}