#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char str[20] = "mam";

    cout << "Enter a string: ";
    // cin >> str;
    
    int length = strlen(str);
    char str_rev[length];

    for (int i = 0; i < length; i++)
    {
        str_rev[i] = str[length-1-i];
    }

    int comp = strcmp(str, str_rev);

    if (comp == 0)
    {
        cout << str << " is a palindrome";
        cout << str_rev;
    }
    else
    {
        cout << str << " is not a palindrome";
    }

    return 0;
}