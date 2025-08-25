using Microsoft.SqlServer.Server;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_Task
{
    class Vehicle
    {
        public Vehicle()
        {
            Console.WriteLine("Vehicle constructor called");
        }

        public static int vehicleCount;

        private string vehicleName;
        private string vehicleId;

        private string VehicleName
        {
            set { vehicleName = value; }
            get { return vehicleName; }
        }

        private string VehicleId
        {
            set { vehicleId = value; }
            get { return vehicleId; }
        }

        public virtual void status()
        {
            Console.WriteLine("VEHICLE");
        }

        public void showInfo()
        {
            Console.WriteLine("Vehicle Name: " + VehicleName);
            Console.WriteLine("Vehicle ID: " + VehicleId);
        }

        public string Name
        {
            private get { return vehicleName; }
            set { vehicleName = value;  }
        }

    }
}
