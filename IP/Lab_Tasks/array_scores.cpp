#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of scores: ";
    cin >> n;
    float scores[n];
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter score " << i << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "scores[" << i << "]= " << scores[i] <<endl;
    }
    cout << "Average= " << sum/n;
    
}