#include <iostream>
using namespace std;

int main()
{
    float runs_4;
    cout << "Enter runs of Shakib Al Hasan in last 4 ODI: ";
    cin >> runs_4;

    float runs_4_avg = runs_4 / 4;
    cout << "Average run in last 4 ODI: " << runs_4_avg <<endl ;

    float runs_avg = 37.20;

    if (runs_4_avg > runs_avg)
    {
        cout << "The performance of Shakib Al Hasan is improving";
    }
    else
    {
        cout << "The performance of Shakib Al Hasan is deteriorating";
    }

}