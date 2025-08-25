using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    struct Bank_Account
    {
        public Bank_Account(double amount, double sum)
        {
            this.amount = amount;
            this.sum = sum;
        }

        private double sum;
        private double amount;

        public void Deposit(double amount)
        {
            this.sum += amount;
            Console.WriteLine("Deposited: " + amount);
        }

        public void Withdraw(double amount)
        {
            this.sum -= amount;
            Console.WriteLine("Withdrawn: " + amount);

        }

        public void Display()
        {
            Console.WriteLine(sum);
        }
    }
}
