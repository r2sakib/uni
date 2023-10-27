#include <iostream>
using namespace std;

int main()
{
    int goals_messi;
    int goals_neymar;
    int matches_messi;
    int matches_neymar;

    cout << "Enter goals scored by Messi: ";
    cin >> goals_messi;
    cout << "In how many matches: ";
    cin >> matches_messi;

    cout << "Enter goals scored by Neymar: ";
    cin >> goals_neymar;
    cout << "In how many matches: ";
    cin >> matches_neymar;

    float avg_messi = (float) goals_messi / matches_messi;
    float avg_neymar = (float) goals_neymar / matches_neymar;

    if (avg_messi > avg_neymar)
    {
        cout << "Messi is a better player";
    }
    else
    {
        cout << "Neymar is a better player";
    }
}