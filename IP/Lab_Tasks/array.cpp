#include <iostream>
using namespace std;

int main()
{
    int arr_size = 5;
    int values[arr_size];

    for (int i = 0; i < arr_size; i++)
    {
        cout << "Enter value of element " << i << ": ";
        cin >> values[i];
    }
    for (int i = 0; i < arr_size; i++)
    {
        cout << "Values[" << i << "]=" << values[i]<<endl;
    }
}
