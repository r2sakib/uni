using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_Task
{
    class Saloon : Car
    {
        public Saloon()
        {
            Console.WriteLine("Saloon constructor called");
        }

        public override void status()
        {
            Console.WriteLine("SALOON");
        }
    }
}
