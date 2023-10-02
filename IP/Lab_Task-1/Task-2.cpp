#include <iostream>
using namespace std;

// This code gets the year from the user and checks if it is a leap year.

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    
    if (year > 1799 && year < 2024) { // Checks if the year is in the range of 1800-2023

        if (year % 400 == 0 || (year % 4 == 0 and year % 100 != 0)) { // Checks if the year is divisible by 400 OR divisible by 4 but not 100
            cout << year << " is a leap year.";
        }
        else {
            cout << year << " is not a leap year.";
        }   
    }
    else {
        cout << year << " is not a valid year.";
    }
}