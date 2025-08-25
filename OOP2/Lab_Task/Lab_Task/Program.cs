using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_Task
{
    class Program
    {
        static void Main(string[] args)
        {
            Vehicle obj1 = new Motorbike();
            Vehicle obj2 = new Truck();
            Vehicle obj3 = new Car();
            Vehicle obj4 = new Saloon();
            Vehicle obj5 = new MVP();

            obj1.status();
            obj2.status();
            obj3.status();
            obj4.status();
            obj5.status();

            int[,] arr = new int[3, 3];

            arr[3, 3] = 5;

            int[][] jagged = new int[3][];

            int[][] jagged2 = new int[][]
            {
                new int[] {1, 2, 3},
                new int[] {2, 3, 4}
            };

            int[][,] jagged3 = new int[][,]
            {
                new int[,] {{1,2}, {3, 4} },
                new int[,] { { 5, 6 }, { 7, 8 } }
            };



        }
    }
}
