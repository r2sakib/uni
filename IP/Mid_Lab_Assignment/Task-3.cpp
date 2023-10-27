#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int salary;
    int quanity;
    cout << "Enter your monthly salary: ";
    cin >> salary;
    
    cout << "Enter the quanity of mangoes you sold in 2022: ";
    cin >> quanity;

    int yearly_salary = salary * 12;
    cout << "Yearly salary: " << yearly_salary << " Taka" << endl;

    int cost_mangoes = quanity * 350;
    cout << "Total cost of mangoes you sold in 2022: " << cost_mangoes << " Taka" << endl;

    if (cost_mangoes > 15000)
    {
        cout << "You got the bonus!" << endl;
        cout << "Annual salary with bonus: " << salary + salary * 0.24 << " Taka";
    }
    else 
    {
        float cost_needed = 15001 - cost_mangoes;
        cout << "Cost needed more to get the bonus: " << cost_needed << " Taka" << endl;
        cout << "Quantity need more to get the bonus: " << ceil(cost_needed / 350);
    }

}