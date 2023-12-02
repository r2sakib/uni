#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int command = 0;
    char LINE[] = "---------------------------------------------";

    while (true)
    {
        cout << LINE << endl;
        cout << "CALCULATOR" << endl;
        cout << LINE << endl;
        cout << "1. ADDITION" << endl;
        cout << "2. SUBSTRACTION" << endl;
        cout << "3. MULTIPLICATION" << endl;
        cout << "4. DIVISION" << endl;
        cout << "5. CLEAR SCREEN" << endl;
        cout << "6. EXIT" << endl;
        cout << LINE << endl;
        cout << "COMMAND: ";

        if (!(cin >> command))
        {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << LINE << endl;

        if (command < 1 || command > 6)
        {
            cout << "Invalid input! Enter numbers only." << endl
                << LINE << endl << endl;
        }

        // Addition
        else if (command == 1)
        {
            int nummber_of_nums = 0;
            cout << "How many numbers do you want to add? ";
            cin >> nummber_of_nums;
            cout << LINE << endl;

            float nums[nummber_of_nums];

            for (int i = 0; i < nummber_of_nums; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> nums[i];
            }

            cout << LINE << endl;

            int result = 0;
            for (int i = 0; i < nummber_of_nums; i++)
            {
                result += nums[i];
            }

            for (int i = 0; i < nummber_of_nums; i++)
            {
                if (i == nummber_of_nums - 1)
                {
                    cout << nums[i] << " = ";
                }
                else
                {
                    cout << nums[i] << " + ";
                }
            }
            
            cout << result << endl;
            cout << LINE << endl
                 << endl;
        }

        // Substraction
        else if (command == 2)
        {
            float num1;
            float num2;

            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;

            cout << LINE << endl;

            float result = num1 - num2;

            cout << num1 << " - " << num2 << " = " << result << endl;
            cout << LINE << endl
                 << endl;
        }

        // Multiplication
        else if (command == 3)
        {
            int nummber_of_nums = 0;
            cout << "How many numbers do you want to multiply? ";
            cin >> nummber_of_nums;

            cout << LINE << endl;

            float nums[nummber_of_nums];

            for (int i = 0; i < nummber_of_nums; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> nums[i];
            }

            cout << LINE << endl;

            int result = 1;
            for (int i = 0; i < nummber_of_nums; i++)
            {
                result *= nums[i];
            }

            for (int i = 0; i < nummber_of_nums; i++)
            {
                if (i == nummber_of_nums - 1)
                {
                    cout << nums[i] << " = ";
                }
                else
                {
                    cout << nums[i] << " * ";
                }
            }

            cout << result << endl;
            cout << LINE << endl
                 << endl;
        }

        // Division
        else if (command == 4)
        {
            float num1;
            float num2;

            cout << "Enter 1st number: ";
            cin >> num1;
            cout << "Enter 2nd number: ";
            cin >> num2;

            cout << LINE << endl;

            if (num2 == 0)
            {
                cout << "Division by zero is not allowed!" << endl;
                cout << LINE << endl
                     << endl;
            }
            else
            {
                float result = num1 / num2;

                cout << num1 << " / " << num2 << " = " << result << endl;
                cout << LINE << endl
                    << endl;
            }
        }

        // Clear Screen
        else if (command == 5)
        {
            system("cls");
        }

        // Exit
        else if (command == 6)
        {
            return 0;
        }
    }
}