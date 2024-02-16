using System;

namespace l07_b06
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
            finally
            {
                Console.Write("\nYour age is " + a);
                Console.ReadLine();
            }
        }
    }
}
