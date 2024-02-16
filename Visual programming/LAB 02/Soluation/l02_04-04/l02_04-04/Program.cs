using System;

namespace l02_04_04
{
    class Program
    {
        static void Main(string[] args)
        {
            String str1;
            bool flag = false;
            Console.Write("Enter String: ");
            str1 = Console.ReadLine();
            flag = str1.EndsWith("india");
            if (flag == true)
                Console.WriteLine("String ends with india");
            else
                Console.WriteLine("String does not end with india");
            Console.ReadLine();
        }
    }
}
