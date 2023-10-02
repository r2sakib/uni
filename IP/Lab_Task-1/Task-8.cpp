#include <iostream>
using namespace std;

/**
    This program calculates the total cost of photocopying pages based on the number of pages 
    and applies a discount if the total cost is greater than 100.
*/

int main() {
    // Ask the user how many pages they want to photocopy.
    int pages;
    cout << "How many pages do you want to photocopy? ";
    cin >> pages;

    // Calculate the total cost.
    float total_cost = 2.35 * pages;
    cout << "Total Cost: " << total_cost << " Taka" << endl;

    // If the total cost is greater than 100, apply a discount.
    if (total_cost > 100) {
        cout << "Discount: 4%" << endl;
        cout << "Grand Total: " << total_cost * 0.04 << " Taka";
    }

}