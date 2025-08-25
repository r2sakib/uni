using System;

namespace Spring_J
{
    class ProbationStudent : CurrStudent
    {
        protected string advisor;

        public ProbationStudent()
        {
            Console.WriteLine("Probation Student Constructor");
        }

        public ProbationStudent(string advisor, string semester, double cgpa, string sname) : base(semester, cgpa, sname)
        {
            this.advisor = advisor;

            Console.WriteLine("Student info: ");
            Console.WriteLine(sname + "\n" + cgpa + "\n" + semester + "\n" + advisor);
        }
    }
}
