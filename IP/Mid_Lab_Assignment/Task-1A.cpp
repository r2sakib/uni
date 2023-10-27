#include <iostream>
using namespace std;

int main() 
{
    for (int i = 0; i < 3; i++)
    {
        int mark;
        if (i == 0) {
            cout << "Enter physics mark: ";
        }
        else if (i == 1) {
            cout << "Enter chemistry mark: ";
        }
        else if (i == 2) {
            cout << "Enter math mark: ";
        }

        cin >> mark;

        if (mark >= 80 && mark <= 100){
            cout << "You got A+" << endl;
        }
        else if (mark >= 70 && mark < 80){
            cout << "You got A" << endl;
        }
        else if (mark >= 60 && mark < 70){
            cout << "You got B+" << endl;
        }
        else if (mark >= 50 && mark < 60){
            cout << "You got B" << endl;
        }
        else if (mark < 50){
            cout << "You got F" << endl;
        }

    }
}