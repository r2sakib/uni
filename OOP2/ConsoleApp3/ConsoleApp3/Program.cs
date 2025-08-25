using System;

namespace ConsoleApp4
{
    internal abstract class Vehicle
    {
        public abstract void PerformMaintenance();
    }

    internal abstract class Vehicle
    {
        public abstract void PerformMaintenance();
    }

    internal class Car : Vehicle
    {
        public override void PerformMaintenance()
        {
            Console.WriteLine("Performing maintenance for Car.");
        }
    }

    internal class Motorcycle : Vehicle
    {
        public override void PerformMaintenance()
        {
            Console.WriteLine("Performing maintenance for Motorcycle.");
        }
    }
    internal class Truck : Vehicle
    {
        public override void PerformMaintenance()
        {
            Console.WriteLine("Performing maintenance for Truck.");
        }
    }
    internal class MaintenanceManager
    {
        public void PerformMaintenance(Vehicle vehicle)
        {
            vehicle.PerformMaintenance();
        }

    }

    internal class Program
    {
        static void Main(string[] args)
        {
            Vehicle car = new Car();
            Vehicle motorcycle = new Motorcycle();
            Vehicle truck = new Truck();

            MaintenanceManager manager = new MaintenanceManager();

            manager.PerformMaintenance(car);
            manager.PerformMaintenance(motorcycle);
            manager.PerformMaintenance(truck);




        }
    }
}