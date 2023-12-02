#include <iostream>
#include <string>
using namespace std;

bool is_vowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    string name = "Sadman Sakib";

    int len = name.size();
    string temp;

    for (int i = 0; i < len; i++)
    {
        if (!is_vowel(name[i]))
        {
            temp += name[i];
        }
    }

    cout << temp;
}