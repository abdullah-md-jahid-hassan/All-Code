using System;

namespace l1_02
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, temp;
            Console.Write("\nEnter the First Number:");
            num1 = int.Parse(Console.ReadLine());
            Console.Write("\nEnter the Second Number:");
            num2 = int.Parse(Console.ReadLine());
            temp = num1;
            num1 = num2;
            num2 = temp;
            Console.Write("\nAfter Swapping:" +
                "\nFirst Number:" + num1 +
                "\nSecond Number:" + num2);
            Console.Read();
        }
    }
}
