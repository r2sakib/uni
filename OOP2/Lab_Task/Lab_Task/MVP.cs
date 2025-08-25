using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_Task
{
    class MVP : Car
    {
        public MVP()
        {
            Console.WriteLine("MVP constructor called");
        }

        public override void status()
        {
            Console.WriteLine("MVP");
        }
    }
}
