/* Find weather a student will get a medal or not. using switch-case
Gold: 3.95
Silver: 3.80
Bronze: 3.70
No medal: <3.70
*/

#include <iostream>
using namespace std;

int main() {
    float cgpa;
    cout << "Enter your CGPA: ";
    cin >> cgpa;
    int cgpa_times = cgpa * 100;

    switch (cgpa_times){
        case 395:
            cout << "You got gold medal";
            break;
        case 380:
            cout << "You got silver medal";
            break;
        case 370:
            cout << "You got bronze medal";
            break;
        default:
            cout << "You got no medal";
    }
}
