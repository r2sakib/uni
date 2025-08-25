using Inheritance;
using System;

namespace Spring_J
{
    class Program
    {
        static void Main(string[] args)
        {
            // ScholarshipStudent S1 = new ScholarshipStudent(5000.0, "4th", 3.8, "AB");
            //ScholarshipStudent s1 = new ScholarshipStudent();
            //Console.ReadLine();

            ProbationStudent P1 = new ProbationStudent("Taslimur Rahman", "6", 2.35, "Sadman Sakib");
            ProbationStudent P2 = new ProbationStudent();
        }
    }
}
