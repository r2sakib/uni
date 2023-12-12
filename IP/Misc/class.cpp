#include <iostream>
using namespace std;

class Account
{
    public:
        int accNo;
        string accName;
    private:
        double balance;
    
    public:
        Account()
        {
            
        }

        Account(string name, int no, int bal)
        {
            accName = name;
            accNo = no;
            balance = bal;
        }

        ~Account()
        {
            
        }

        void createAccount()
        {
            cout << "Enter account name: ";
            cin >> accName;
            cout << "Enter account no.: ";
            cin >> accNo;
            balance = 0;
        }

        void showAccoutnInfo()
        {
            cout << "Account Name: " << accName << endl;
            cout << "Accoutn No.: " << accNo << endl;
            cout << "Balance: " << balance << endl;
        }

        void deposit()
        {
            cout << "Enter amount to deposit: ";
            double amt;
            cin >> amt;
            balance += amt;
            cout << "Balance: " << balance << endl;
        }

        void withdraw()
        {
            cout << "Enter amount to withdraw: ";
            double amt;
            cin >> amt;
            balance -= amt;
            cout << "Balance: " << balance;
        }
};


int main(){
    Account a("Sadman", 123, 1000);
    a.showAccoutnInfo();
    a.deposit();
    a.withdraw();

    Account b;
    b.showAccoutnInfo();

}