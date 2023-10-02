#include <iostream>
using namespace std;

// This code calculates the area of a triangle and checks if area is even or odd

int main() {
    // Get height and base from user
    float h, b;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter base: ";
    cin >> b;

    // Calculate area
    float area = 0.5 * b * h;
    cout << endl << "Area: " << area << endl;

    // Check if area is even or odd
    if ((int) area == area) {
        if ((int) area % 2 == 0) {
            cout << "Area is even";
        }
        else {
            cout << "Area is odd";
        }
    }
    else {
        cout << "Area is a float";
    }
}