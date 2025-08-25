using System;


namespace Spring_J
{
    class ScholarshipStudent : CurrStudent
    {
        protected double amount;

        public ScholarshipStudent()
        {
            Console.WriteLine("ScholarshipStudent Constructor");
        }
        public ScholarshipStudent(double amount, string semester, double cgpa, string sname) : base(semester, cgpa, sname)
        {
            this.amount = amount;

            Console.WriteLine("Student info :");
            Console.WriteLine(sname + "\n" + cgpa + "\n" + semester + "\n" + amount);
        }
    }
}