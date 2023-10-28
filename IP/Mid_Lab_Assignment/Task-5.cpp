#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    bool palin = false;
    
    cout << "Enter a string: "; cin >> string;
    
    length = strlen(string);
    
    for(i=0;i < length ;i++){
        if(string[i] != string[length-i-1]){
            palin=true;
            break;
           }
        }
    
    if (palin) {
        cout << string << " is not a palindrome" << endl; 
    }    
    else {
        cout << string << " is a palindrome" << endl; 
    }
}