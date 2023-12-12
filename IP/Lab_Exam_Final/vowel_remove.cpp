#include <iostream>
#include <cstring>
using namespace std;

bool Is_Vowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

char Remove_Vowel(char names[5][30])
{
    char vl_names[5][30];

    for (int i = 0; i < 5; i++)
    {
        int len = strlen(names[i]);
        int k = 0;

        for (int j = 0; j < len; j++)
        {
            if (!Is_Vowel(names[i][j]))
            {
                vl_names[i][k] = names[i][j];
                k++;
            }
        }
        vl_names[i][k] = '\0';
    }

    for (int i = 0; i < 5; i++)
    {
        cout << vl_names[i] << endl;
    }
}


int main() 
{
    char names[5][30] = {"Sakib", "Sadman", "Hello", "World", "Hello"};
    Remove_Vowel(names);
}