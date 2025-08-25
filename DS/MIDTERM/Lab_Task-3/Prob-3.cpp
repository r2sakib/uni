#include <iostream>
using namespace std;

struct Student {
    int id;
    int credits;
    float cgpa;
};

int main() {

    Student students[10] =
    {
        {1, 50, 3.4},
        {2, 60, 3.7},
        {3, 108, 3.8},
        {4, 99, 2.8},
        {5, 140, 2.7},
        {6, 15, 3.9},
        {7, 30, 3.0},
        {8, 45, 3.75},
        {9, 55, 3.85},
        {10, 28, 2.6}
    };

    cout << "CGPA more than 3.75" << endl;
    for (Student s : students) {
        if (s.cgpa > 3.75) {
            cout << s.id << endl;
        }
    }
    cout << endl << "Completed more than 50 credits" << endl;
    for (Student s : students) {
        if (s.credits > 50) {
            cout << s.id << endl;
        }
    }
    
    
    return 0;
}