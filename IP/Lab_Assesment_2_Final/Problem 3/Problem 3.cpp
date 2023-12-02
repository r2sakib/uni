#include <iostream>
using namespace std;

float largeSmall(float *arr, int len, char type)
{
    if (type == 'l')
    {
        float largest = 0;
        for (int i = 0; i < len; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }
        }

        return largest;
    }
    else if (type == 's')
    {
        float smallest = 0;
        for (int i = 0; i < len; i++)
        {
            if (arr[i] < smallest)
            {
                smallest = arr[i];
            }
        }

        return smallest;
    }  
}

int main() {
    
    float arr[2][4] = {{1.9, 2.6, 3, 4}, {5.6, -1.3, 6, -2.7}};

    float largest = largeSmall(arr[0], 4, 'l');
    float smallest = largeSmall(arr[1], 4, 's');

    float mult = largest * smallest;

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    cout << "Multiple: " << mult << endl;


    return 0;
}
