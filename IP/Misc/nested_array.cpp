#include<iostream>
using namespace std;
int main(){
    char arr[2][4];

    cout<<"Enter the elements of the array:"<<endl;
    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            cin>>arr[row][col];
        }
    }

    cout<<"Inputted Elements:"<<endl;
    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            cout << arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout << endl;

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 4; col++)
        {
            if(arr[row][col] == 'a' || arr[row][col] == 'e' || arr[row][col] == 'i' || arr[row][col] == 'o' || arr[row][col] == 'u'
                || arr[row][col] == 'A' || arr[row][col] == 'E' || arr[row][col] == 'I' || arr[row][col] == 'O' || arr[row][col] == 'U')
            {
                cout << arr[row][col]<<" is a vowel"<<endl;
            }
            else
            {
                cout << arr[row][col]<<" is a consonant"<<endl;
            }
        }
    }
}