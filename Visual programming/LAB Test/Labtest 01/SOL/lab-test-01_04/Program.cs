using System;

namespace lab_test_01_04
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int [5];
            Console.WriteLine("Enter 5 eliment of array:");
            for (int i = 0; i < 5; i++) a[i] = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("\n\nOdd numbers in array:");
            for (int i = 0; i < 5; i++) if (a[i]%2!=0) Console.Write(a[i]+"\t");
        }
    }
}
