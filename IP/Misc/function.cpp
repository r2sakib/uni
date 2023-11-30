#include<iostream>
using namespace std;

void posNeg(int a)
{
    if (a >= 0)
    {
        cout << a << " is positive" << endl;
    }
    else 
    {
        cout << a << " is negative" << endl;
    }
}

int main()
{
    posNeg(5);
    posNeg(-3);
}