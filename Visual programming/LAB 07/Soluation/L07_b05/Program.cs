using System;
namespace L07_b05
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = 0;
            Console.Write("Enter your age: ");
            try
            {
                a = Convert.ToInt32(Console.ReadLine());
            }
            catch (Exception x)
            {
                Console.Write(x.Message);
            }
            Console.Write("\nYour age is "+a);
            Console.ReadLine();
        }
    }
}
