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
        case 395 ... 400:
            cout << "You got GOLD medal";
            break;
        case 380 ... 394:
            cout << "You got SILVER medal";
            break;
        case 370 ... 379:
            cout << "You got BRONZE medal";
            break;
        default:
            cout << "You got NO medal";
    }
}
