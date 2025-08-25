using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_Task
{
    class Truck : Vehicle
    {
        public Truck()
        {
            Console.WriteLine("Truck constructor called");
        }

        public override void status()
        {
            Console.WriteLine("Truck");
        }
    }
}
