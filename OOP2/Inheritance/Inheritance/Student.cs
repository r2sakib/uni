using System;

namespace Spring_J
{
    class Student
    {
        private int sl;
        protected double cgpa;
        public string sname;

        public Student()
        {
            Console.WriteLine("Student Constructor");
        }
        public Student(double cgpa, string sname)
        {
            this.cgpa = cgpa;
            this.sname = sname;
        }

    }
}