#include <iostream>
using namespace std;

int main() {
    string info[4];

    for (int i = 0; i < 4; i++)
    {
        if (i==0)
        {
            cout << "Enter name: ";
        }
        else if (i==1)
        {
            cout << "Enter ID: ";
        }
        else if (i==2)
        {
            cout << "Enter department: ";
        }
        else if (i==3)
        {
            cout << "Enter University name: ";
        }

        getline(cin, info[i]);
    }
    

    for (int i = 0; i < 4; i++)
    {
        cout << info[i] << ", ";
    }

    return 0;
}