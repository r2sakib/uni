using System;


namespace Spring_J
{
    class CurrStudent : Student
    {
        protected string semester;

        public CurrStudent()
        {
            Console.WriteLine("CurrentStudent Constructor");
        }
        public CurrStudent(string semester, double cgpa, string sname) : base(cgpa, sname)
        {
            this.semester = semester;
        }
    }
}