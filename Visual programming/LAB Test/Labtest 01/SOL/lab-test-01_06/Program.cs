using System;

namespace lab_test_01_06
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("All index of a 3X3 mattrix is:");
            for (int i=1; i<=3; i++)
            {
                for(int j=1; j<=3; j++) Console.Write(i+", "+j+"\t");
                Console.WriteLine("");
            }
        }
    }
}
