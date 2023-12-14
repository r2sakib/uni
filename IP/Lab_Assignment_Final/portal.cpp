#include <iostream>
#include <stdlib.h>
using namespace std;

const string LINE = "--------------------------------------------------------------\n";
const string PLINE = "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
const string HLINE = "#############################################################\n";

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
        int courseCount = 0;
    public:
        Student(string n, int a, string sid) : User(n, a)
        {
           sID = sid;
        }

        ~Student() {};

        string getSID()
        {
            return sID;
        }

        int getCourseCount()
        {
            return courseCount;
        }

        void displayStudentInfo()
        {
            cout << "Name: " << getName() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "ID: " << sID << endl;
        }

        void displayCourses()
        {
            if (courseCount == 0)
            {
                cout << PLINE;
                cout << "STUDENT DOES NOT HAVE ANY COURSES YET!\n";
                cout << PLINE;
            }
            else
            {
                cout << PLINE;
                cout << "COURSES\n";
                cout << PLINE;

                for (int i = 0; i < courseCount; i++)
                {
                    cout << "- " << courses[i] << endl;
                }
                cout << endl;
            }
        }

        void addCourse(string courseName)
        {
            courses[courseCount] = courseName;
            courseCount++;
        }

};

void loggedIn(Student &student)
{
    int command;
    while (true)
    {
        cout << LINE;
        cout << "STUDENT PORTAL (LOGGED IN)\n";
        cout << LINE;

        cout << "1. Display Student Info\n";
        cout << "2. Display Courses\n";
        cout << "3. Add Courses\n";
        cout << "4. Clear Screen\n";
        cout << "5. Logout\n";

        cout << LINE;
        cout << "COMMAND: ";

        // Input Validation
        if (!(cin >> command))
        {
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cout << LINE;

        if (command < 1 || command > 3)
        {
            system("cls");
            cout << HLINE << "Invalid input! Enter numbers only.\n" << HLINE << endl;
        }

        // Display Student Info
        if (command == 1)
        {
            system("cls");
            cout << PLINE;
            cout << "STUDENT INFO:\n";
            cout << PLINE;
            student.displayStudentInfo();
            cout << endl;
        } 

        // Display Courses
        else if (command == 2)
        {
            system("cls");
            student.displayCourses();
        }

        // Add Courses
        else if (command == 3)
        {
            int courseCount = student.getCourseCount();

            if (courseCount < 5)
            {
                cout << "Enter course name: ";
                string courseName;
                getline(cin >> ws, courseName);

                student.addCourse(courseName);

                system("cls");
                cout << PLINE;
                cout << "COURSE ADDED SUCCESSFULLY\n";
                cout << PLINE;
            }
            else
            {
                system("cls");
                cout << HLINE;
                cout << "CANNOT ADD ANY MORE COURSES!\n";
                cout << HLINE;
            }
        }

        // Clear Screen
        else if (command == 4)
        {
            system("cls");
        }

        // Logout
        else if (command == 5)
        {
            return;
        }
    }
}

int main() {
    cout << LINE;
    cout << "CREATE STUDENT ACCOUNT \n";
    cout << LINE;

    cout << "Enter Student Name: ";
    string name;
    getline(cin >> ws, name);
    
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

        // Input Validation
        if (!(cin >> command))
        {
            cin.clear();
            cin.ignore(10000, '\n');
        }

        if (!command == 3) {cout << PLINE;}

        if (command < 1 || command > 3)
        {
            system("cls");
            cout << HLINE << "Invalid input! Enter numbers only.\n" << HLINE << endl;
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
            getline(cin >> ws, name);

            cout << "Enter Student ID: ";
            string sID;
            cin >> sID;

            if (student.getName() == name && student.getSID() == sID)
            {
                system("cls");

                cout << PLINE;
                cout << "LOGIN SUCCESSFUL\n";
                cout << PLINE << endl;

                loggedIn(student);

                system("cls");
            }
            else
            {
                system("cls");
                cout << HLINE;
                cout << "INVALID NAME OR ID (Try again)\n";
                cout << HLINE;
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
            int cmd;
            cin >> cmd;

            if (cmd < 1 || cmd > 2)
            {
                system("cls");
                cout << HLINE << "Invalid input! Enter numbers only.\n" << HLINE << endl;
            }

            else if (cmd == 1)
            {
                return 0;
            }
            else if (cmd == 2)
            {
                cmd = 0;
                system("cls");
            }
        }
    }

    return 0;
}