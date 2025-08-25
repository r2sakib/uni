using System;

namespace ConsoleApp1
{
    class Person
    {
        private string name;

        public string Name
        {
            set { name = value; }
            get { return name; }
        }

        public void print()
        {
            Console.WriteLine(name);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Nullable<int> y = null;
            int? x = null;

            int j = x ?? 10;

            Console.WriteLine(j);
            
        }
    }
}
