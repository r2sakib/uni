using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_Task
{
    class Motorbike : Vehicle
    {
        public Motorbike()
        {
            Console.WriteLine("Motorbike constructor called");
        }

        public override void status()
        {
            Console.WriteLine("MOTORBIKE");
        }
    }
}
