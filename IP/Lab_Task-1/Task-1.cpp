#include <iostream>
using namespace std;

/*  
    This program takes in 5 numbers and calculates the sum and average of those numbers.
    It then outputs the sum and average and whether the average is even or odd. 
*/

int main() {
    float num1, num2, num3, num4, num5;
    cout << "Enter 5 numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    float sum = num1 + num2 + num3 + num4 + num5;
    float average = sum / 5;

    cout << "Sum: " << sum << endl;
    cout << "Average " << average << endl; 

    if ((int) average % 2 == 0) {
        cout << "Average is even";
    }
    else {
        cout << "Average is odd";
    }
}