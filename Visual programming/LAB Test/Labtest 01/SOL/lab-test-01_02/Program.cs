using System;

namespace lab_test_01_02
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int i=1; i<=100; i+=5)
            {
                for (int j=0; j<5; j++)
                {
                    Console.Write(i+"\t");
                    i++;
                }
                Console.WriteLine();
                int k = i + 4;
                for (int j = 0; j < 5; j++)
                {
                    Console.Write(k + "\t");
                    k--;
                }
                Console.WriteLine();
            }
        }
    }
}
