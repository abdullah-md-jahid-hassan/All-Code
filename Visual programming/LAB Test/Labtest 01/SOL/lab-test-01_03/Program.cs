using System;

namespace lab_test_01_03
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 100;
            Console.WriteLine("Odd number by while loop:");
            while (i != 80)
            {
                if (i%2!=0) Console.Write(i + "\t");
                i--;
            }
            i = 99;
            Console.WriteLine("\nOdd number by Do while loop:");
            do
            {
                if (i % 2 != 0) Console.Write(i + "\t");
                i--;
            } while (i != 98);
        }
    }
}
