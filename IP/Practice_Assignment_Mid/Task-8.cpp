#include <iostream>
using namespace std;

int main()
{
    int range_start;
    int range_end;
    cout << "Enter a range seperated by a space: ";
    cin >> range_start >> range_end;

    int range_len = range_end - range_start;
    int evens[range_len];
    int odds[range_len];
    int primes[range_len];

    for (int i = range_start; i < range_end; i++)
    {
        // checks even odd
        if (i % 2 == 0)
        {
            evens[i - range_start] = i;
            odds[i - range_start] = 0;
        }
        else
        {
            odds[i - range_start] = i;
            evens[i - range_start] = 0;
        }

        // checks prime
        bool is_prime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                primes[i - range_start] = 0;
                break;
            }
            primes[i - range_start] = i;
        }
    }

    cout << "Evens: ";
    for (int i = 0; i < range_len; i++)
    {
        if (evens[i] != 0)
        {
            cout << evens[i] << " ";
        }
    }

    cout << endl << "Odds: ";
    for (int i = 0; i < range_len; i++)
    {
        if (odds[i] != 0)
        {
            cout << odds[i] << " ";
        }
    }

    cout << endl << "Primes: ";
    for (int i = 0; i < range_len; i++)
    {
        if (primes[i] != 0)
        {
            cout << primes[i] << " ";
        }
    }
    
}