using System;

namespace lab_test_01_08
{
    class Program
    {
        static void Main(string[] args)
        {
            int[][] a = new int[2][2];
            Console.WriteLine("Enter 4 Values: ");
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    a[i][j] = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Nagitive Values: ");
            for (int i = 0; i < 2; i++)
                for (int j = 0; j < 2; j++)
                    if (a[i][j]<0) Console.WriteLine(a[i][j] + "\t");
        }
    }
}
