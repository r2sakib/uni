#include <iostream>
using namespace std;

int main()
{
    cout << "Which type of gold do you want to purchase?" << endl;
    cout << "Press 1 for 22-Karat Gold" << endl;
    cout << "Press 2 for 24-Karat Gold" << endl;

    int option;
    cin >> option;

    float quantity;
    cout << "Enter the quantity of gold you want to purchase: ";
    cin >> quantity;
    cout << endl;

    float total_cost = 0;
    switch (option)
    {
        case 1:
            total_cost = quantity * 7000;
            cout << "Total cost: " << total_cost << " BDT" << endl;
            break;
        case 2:
            total_cost = quantity * 6500;
            cout << "Total cost: " << total_cost << " BDT" << endl;
            break;
        default:
            cout << "Invalid input";
    }

    char choice;
    cout << "Do you want to convert the total cost in US dollar? Press Y or N: ";
    cin >> choice;

    switch (choice)
    {
        case 'Y':
            cout << "Total cost: $" << total_cost / 110.24;
            break;
        case 'N':
            cout << "Thank you";
    }


}