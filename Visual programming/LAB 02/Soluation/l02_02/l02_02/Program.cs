using System;

namespace l02_02
{
    class Program
    {
        static void Main(string[] args)
        {
            int a, b, c;
            Console.Write("Enter first number : ");
            a = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter second number: ");
            b = Convert.ToInt32(Console.ReadLine());
            Console.Write("Enter third number : ");
            c = Convert.ToInt32(Console.ReadLine());
            int l = (a > b) ? ((a > c) ? a : c) : (b > c ? b : c);
            Console.WriteLine("Largest number is " + l);
            Console.ReadLine();

        }
    }
}
