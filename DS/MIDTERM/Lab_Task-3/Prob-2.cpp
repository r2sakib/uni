#include <iostream>
#include <string>
using namespace std;

string encode(string s, int j) {
    string enString = s;

    for (int i = j; i < s.length(); i=i+1+j) {
        char c = s[i];
        
        if (c != ' ') {
            c = c + j;
            enString[i] = c;
        }
    }

    return enString;
}

int main() {
    
    string enString = encode("I am a student", 2);
    cout << enString;
    
    return 0;
}