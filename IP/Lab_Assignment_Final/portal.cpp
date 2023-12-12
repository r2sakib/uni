#include <iostream>
#include <stdlib.h>
using namespace std;

const string LINE = "--------------------------------------------------------------\n";
const string PLINE = "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

class User
{
    private:
        string name;
        int age;
    public:
        User () {};

        User(string n, int a)
        {
            name = n;
            age = a;
        }

        ~User() {};

        string getName()
        {
            return name;
        }

        int getAge()
        {
            return age;
        }
};

class Student : public User
{
    private:
        string sID;
        string courses[5];
        int course_count;
    public:
        Student(string n, int a, string sid) : User(n, a)
        {
           sID = sid;
        }

        ~Student() {};

        void displayStudentInfo()
        {
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "ID: " << sID << endl;
        }

        string getSID()
        {
            return sID;
        }
};


int main() {
    cout << LINE;
    cout << "CREATE STUDENT ACCOUNT \n";
    cout << LINE;

    cout << "Enter Student Name: ";
    string name;
    cin >> name;
    
    cout << "Enter Student Age: ";
    int age;
    cin >> age;

    cout << "Enter Student ID: ";
    string sID;
    cin >> sID;

    Student student(name, age, sID);

    system("cls");
    cout << endl << PLINE;
    cout << "New Student Account Created\n";
    cout << PLINE;
    student.displayStudentInfo();


    int command = 0;

    while (true)
    {
        cout << endl << LINE;
        cout << "STUDENT PORTAL\n";
        cout << LINE;
        cout << "1. Login\n";
        cout << "2. Clear Screen\n";
        cout << "3. Exit\n";
        cout << LINE;
        cout << "COMMAND: ";

        if (!(cin >> command))
        {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        if (!command == 3) {cout << PLINE;}

        if (command < 1 || command > 3)
        {
            cout << PLINE << "Invalid input! Enter numbers only.\n"
                    << PLINE << endl;
        }

        // Login
        else if (command == 1)
        {
            system("cls");

            cout << LINE;
            cout << "ENTER LOGIN INFO\n";
            cout << LINE;
            
            cout << "Enter Student Name: ";
            string name;
            cin >> name;

            cout << "Enter Student ID: ";
            string sID;
            cin >> sID;

            if (student.getName() == name && student.getSID() == sID)
            {
                
            }
        }

        // Clear Screen
        else if (command == 2)
        {
            system("cls");
        }

        // Exit
        else if (command == 3)
        {
            cout << LINE;
            cout << "ARE YOU SURE YOU WANT TO EXIT?\n";
            cout << "1. YES\n";
            cout << "2. NO\n";
            cout << LINE;
            
            cout << "COMMAND: ";
            int command;
            cin >> command;

            if (command == 1)
            {
                return 0;
            }
            else
            {
                command = 0;
                system("cls");
            }
        }
    }

    return 0;
}